#include "navigation.h"

VehicleCommand
processBrainCommand(
BrainData brain)
{
    if(brain.meditation > 80)
        return STOP;

    if(brain.attention > 70)
        return FORWARD;

    if(brain.blink == 1)
        return LEFT;

    if(brain.blink == 2)
        return RIGHT;

    return IDLE;
}