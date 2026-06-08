#include "../config/pins.h"
#include "../config/constants.h"

#include "../motor/motor.h"
#include "../bci/bci.h"
#include "../ultrasonic/ultrasonic.h"

Motor motor;

BCI brain;

Ultrasonic front(FRONT_TRIG,FRONT_ECHO);
Ultrasonic left(LEFT_TRIG,LEFT_ECHO);
Ultrasonic right(RIGHT_TRIG,RIGHT_ECHO);

void setup()
{
    Serial.begin(115200);

    motor.begin();

    brain.begin();
}

void loop()
{
    BrainData bciData =
      brain.readBrain();

    float dFront =
      front.getDistance();

    float dLeft =
      left.getDistance();

    float dRight =
      right.getDistance();

    if(dFront < SAFE_DISTANCE)
    {
        if(dLeft > dRight)
            motor.left();
        else
            motor.right();
    }
    else
    {
        if(bciData.attention > 70)
            motor.forward();

        else if(bciData.blink == 1)
            motor.left();

        else if(bciData.blink == 2)
            motor.right();

        else if(
            bciData.meditation > 80)
            motor.stop();
    }

    delay(100);
}