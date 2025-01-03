#ifndef INPUT_DATA_H
#define INPUT_DATA_H

#include <vector>

struct InputData {
    std::vector<int> array;
    int size = 0;
};


void readInputData(InputData& inputData);

#endif 