#include "obstacle_avoidance.h"

void avoidObstacle(
float front,
float left,
float right,
Motor &motor)
{
    if(front < 30)
    {
        if(left > right)
            motor.left();
        else
            motor.right();
    }
    else
    {
        motor.forward();
    }
}