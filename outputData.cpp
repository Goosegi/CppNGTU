#include "outputData.h"

void printResults(OutputData& outputData) {
    if (outputData.isZigzag) {
        std::cout << "\n ������ �������� ��������." << std::endl;
    }
    else {
        std::cout << "\n ������ �� �������� ��������. ��������� �� �������: " << outputData.position << std::endl;
    }
}