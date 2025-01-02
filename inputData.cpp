#include <iostream>
#include "inputData.h"


void readInputData(InputData& inputData) {
    while (true) {
        std::cout << "������� ���������� ��������� ������� (�� 2�): ";
        std::cin >> inputData.size;

        if (std::cin.fail() || inputData.size < 2) {
            std::cin.clear(); // ����� ��������� ������

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ������� ������
            std::cout << "������: ������� ����� ����� �� 2." << std::endl;
        }
        else {
            break;
        }
    }

    inputData.array.resize(inputData.size);

    std::cout << "������� �������� �������:" << std::endl;
    for (int i = 0; i < inputData.size; ++i) {
        std::cout << "������� " << (i + 1) << ": ";
        std::cin >> inputData.array[i];
    }
}