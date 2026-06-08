#include "ultrasonic.h"

Ultrasonic::Ultrasonic(int trig,int echo)
{
    trigPin=trig;
    echoPin=echo;

    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
}

float Ultrasonic::getDistance()
{
    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);

    long duration =
      pulseIn(echoPin,HIGH);

    return duration * 0.034 / 2;
}