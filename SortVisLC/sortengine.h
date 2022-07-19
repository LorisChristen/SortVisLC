#ifndef SORTENGINE_H
#define SORTENGINE_H

#include <vector>
#include "cstdlib"
#include <iostream>
#include <chrono>


class sortEngine
{
public:
    sortEngine(int vectorSize);

    // Shuffle
    void shuffle();

    // Selection sort
    void selectionSort();

    // Bubble sort

    // get the values vector
    std::vector<int> *getValues(){ return &values;}

    // Check if sorted
    bool sorted();

private:
    void swap(int &a, int &b);
    std::vector<int> values;
};

#endif // SORTENGINE_H
