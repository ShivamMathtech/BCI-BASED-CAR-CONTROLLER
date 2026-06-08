#include "../config/motor.h"
#include "../config/pins.h"

void Motor::begin()
{
    pinMode(IN1,OUTPUT);
    pinMode(IN2,OUTPUT);
    pinMode(IN3,OUTPUT);
    pinMode(IN4,OUTPUT);

    pinMode(ENA,OUTPUT);
    pinMode(ENB,OUTPUT);
}

void Motor::forward()
{
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);

    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);

    analogWrite(ENA,180);
    analogWrite(ENB,180);
}

void Motor::left()
{
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);

    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
}

void Motor::right()
{
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);

    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
}

void Motor::stop()
{
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
}