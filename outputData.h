#ifndef OUTPUT_DATA_H
#define OUTPUT_DATA_H

#include <iostream>

struct OutputData {
    bool isZigzag;
    int position;

    OutputData() : isZigzag(false), position(-1) {}
};

void printResults(const OutputData& outputData);

#endif