#include <iostream>
#include "application.h"
#include "test.h"


int main() {
    setlocale(LC_ALL, "RU");

    Application app;

    const int numberOfTests = 5; 

    runTests(numberOfTests);


    input(app);     // Ввод данных
    process(app);   // Обработка данных
    output(app);    // Вывод результатов

    return 0;
}