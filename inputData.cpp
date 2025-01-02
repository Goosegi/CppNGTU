#include <iostream>
#include "inputData.h"


void readInputData(InputData& inputData) {
    while (true) {
        std::cout << "¬ведите количество элементов массива (от 2х): ";
        std::cin >> inputData.size;

        if (std::cin.fail() || inputData.size < 2) {
            std::cin.clear(); // —брос состо€ни€ потока

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ќчистка буфера
            std::cout << "ќшибка: введите целое число от 2." << std::endl;
        }
        else {
            break;
        }
    }

    inputData.array.resize(inputData.size);

    std::cout << "¬ведите элементы массива:" << std::endl;
    for (int i = 0; i < inputData.size; ++i) {
        std::cout << "Ёлемент " << (i + 1) << ": ";
        std::cin >> inputData.array[i];
    }
}