#ifndef MOTOR_H
#define MOTOR_H

class Motor
{
public:
    void begin();

    void forward();
    void backward();

    void left();
    void right();

    void stop();
};

#endif