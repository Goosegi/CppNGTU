#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "test.h"
#include "application.h"

// Функция для генерации случайного массива
std::vector<int> generateRandomArray(int size, int minValue, int maxValue) {
    std::vector<int> array(size);
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % (maxValue - minValue + 1) + minValue; // Генерация случайного числа в диапазоне
    }
    return array;
}

// Функция для выполнения тестов
void runTests(int numberOfTests) {
    srand(static_cast<unsigned int>(time(0))); // Установка начального значения генератора случайных чисел

    for (int i = 0; i < numberOfTests; ++i) {
        int size = rand() % 10 + 2;
        std::vector<int> testArray = generateRandomArray(size, 1, 1000);

        Application app;
        app.inputData.array = testArray;
        app.inputData.size = size;

        app.process(); // Обработка данных

        std::cout << "Тест " << (i + 1) << ": Массив: ";
        for (int num : testArray) {
            std::cout << num << " ";
        }

        std::cout << "\nРезультат: ";
        if (app.outputData.isZigzag) {
            std::cout << "Массив является зигзагом." << std::endl;
        }
        else {
            std::cout << "Массив не является зигзагом. Позиция нарушения: " << app.outputData.position << std::endl;
        }
    }
}