#ifndef BCI_H
#define BCI_H

struct BrainData
{
    int attention;
    int meditation;
    int blink;
};

class BCI
{
public:
    void begin();

    BrainData readBrain();
};

#endif