#ifndef APPLICATION_H
#define APPLICATION_H

#include <vector>
#include "inputData.h"
#include "outputData.h"

struct Application {
    InputData inputData;
    OutputData outputData;

    Application() {}

    void input();
    void process();
    void output();
};

bool isZigzag(const std::vector<int>& arr, int& pos);

#endif