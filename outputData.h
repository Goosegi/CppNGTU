#ifndef OUTPUT_DATA_H
#define OUTPUT_DATA_H

#include <iostream>

struct OutputData {
    bool isZigzag = false;
    int position = -1;
};

void printResults(OutputData& outputData);

#endif