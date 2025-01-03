#include <iostream>
#include "application.h"
#include "test.h"


int main() {
    setlocale(LC_ALL, "RU");

    Application app;

    const int numberOfTests = 5; 

    runTests(numberOfTests);


    input(app);     // ���� ������
    process(app);   // ��������� ������
    output(app);    // ����� �����������

    return 0;
}