#include <iostream>
#include "inputData.h"
#include "application.h"

void Application::input() {
    readInputData(inputData);
}

void Application::process() {
    int position = -1;
    outputData.isZigzag = isZigzag(inputData.array, position);
    outputData.position = position;
}

void Application::output() {
    printResults(outputData);
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