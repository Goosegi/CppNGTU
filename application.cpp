#include <iostream>
#include "inputData.h"
#include "application.h"
#include "outputData.h"

void input(Application& app) {
    readInputData(app.inputData);
}

void process(Application& app) {
    int position = -1;
    app.outputData.isZigzag = isZigzag(app.inputData.array, position);
    app.outputData.position = position;
}

void output(Application& app) {
    printResults(app.outputData);
}



bool isZigzag(const std::vector<int>& arr, int& pos) {
    int n = arr.size();
    if (n < 2) return true;

    if (arr[0] == arr[1]) {
        pos = 0;
        return false;
    }

    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] == arr[i - 1] || arr[i] == arr[i + 1]) {
            pos = i;
            return false;
        }
    }

    for (int i = 1; i < n - 1; ++i) {
        if (!((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) ||
            (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]))) {
            pos = i;
            return false;
        }
    }

    if (arr[n - 1] == arr[n - 2]) {
        pos = n - 1;
        return false;
    }

    return true;
}