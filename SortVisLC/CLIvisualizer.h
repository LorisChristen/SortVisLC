#ifndef SORTVISUALIZER_H
#define SORTVISUALIZER_H

#include "sortengine.h"

#include <iostream>

class CLIVisualizer
{
public:
    CLIVisualizer();

    void display(sortEngine &E);
};

#endif // SORTVISUALIZER_H
