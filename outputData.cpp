#include "outputData.h"

void printResults(OutputData& outputData) {
    if (outputData.isZigzag) {
        std::cout << "\n Массив является зигзагом." << std::endl;
    }
    else {
        std::cout << "\n Массив не является зигзагом. Нарушение на позиции: " << outputData.position << std::endl;
    }
}