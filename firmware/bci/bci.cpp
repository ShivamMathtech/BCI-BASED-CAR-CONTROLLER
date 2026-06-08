#include "bci.h"

void BCI::begin()
{
    Serial1.begin(57600);
}

BrainData BCI::readBrain()
{
    BrainData data;

    data.attention = random(40,100);
    data.meditation = random(20,90);
    data.blink = random(0,3);

    return data;
}