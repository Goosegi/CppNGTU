#ifndef APPLICATION_H
#define APPLICATION_H

#include <vector>
#include "inputData.h"
#include "outputData.h"

struct Application {
    InputData inputData;
    OutputData outputData;
};

void input(Application& app);
void process(Application& app);
void output(Application& app);
bool isZigzag(const std::vector<int>& arr, int& pos);

#endif