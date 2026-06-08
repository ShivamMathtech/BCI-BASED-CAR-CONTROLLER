#ifndef ULTRASONIC_H
#define ULTRASONIC_H

class Ultrasonic
{
public:
    Ultrasonic(int trig,int echo);

    float getDistance();

private:
    int trigPin;
    int echoPin;
};

#endif