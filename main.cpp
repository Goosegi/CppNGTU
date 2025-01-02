#include <iostream>
#include "application.h"
#include "test.h"


int main() {
    setlocale(LC_ALL, "RU");

    Application app;

    const int numberOfTests = 5; 

    runTests(numberOfTests);


    app.input();     // Ввод данных
    app.process();   // Обработка данных
    app.output();    // Вывод результатов

    return 0;
}