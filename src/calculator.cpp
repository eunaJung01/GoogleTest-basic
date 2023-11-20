#include "calculator.h"

#include <iostream>

int Calculator::add(int a, int b) {
    validateInputs(a, b);
    /*
    if (a >= 1000000 || b >= 1000000) {
        throw std::invalid_argument("Invalid input");
    }
    //*/
    return a + b;
}

int Calculator::subtract(int a, int b) {
    validateInputs(a, b);
    /*
    if (a >= 1000000 || b >= 1000000) {
        throw std::invalid_argument("Invalid input");
    }
    //*/
    return a - b;
}

void Calculator::validateInputs(int a, int b) {
    if (a >= 1000000 || b >= 1000000) {
        throw std::invalid_argument("Invalid input");
    }
}
