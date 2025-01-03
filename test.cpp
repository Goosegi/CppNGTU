#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "test.h"
#include "application.h"

// ������� ��� ��������� ���������� �������
std::vector<int> generateRandomArray(int size, int minValue, int maxValue) {
    std::vector<int> array(size);
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % (maxValue - minValue + 1) + minValue;
    }
    return array;
}

void runTests(int numberOfTests) {
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < numberOfTests; ++i) {
        int size = rand() % 10 + 1;
        std::vector<int> testArray = generateRandomArray(size, 1, 1000);

        Application app;
        app.inputData.array = testArray;
        app.inputData.size = size;

        process(app); // ��������� ������

        std::cout << "���� " << (i + 1) << ": ������: ";
        for (int num : testArray) {
            std::cout << num << " ";
        }

        std::cout << "\n���������: ";
        if (app.outputData.isZigzag) {
            std::cout << "������ �������� ��������." << std::endl;
        }
        else {
            std::cout << "������ �� �������� ��������. ������� ���������: " << app.outputData.position << std::endl;
        }
    }
}
