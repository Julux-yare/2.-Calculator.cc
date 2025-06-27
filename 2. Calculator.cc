#include "Calculator.h"
#include <stdexcept>  // För att hantera division med noll

// Metod för addition
double Calculator::add(double a, double b) {
    return a + b;
}

// Metod för subtraktion
double Calculator::subtract(double a, double b) {
    return a - b;
}

// Metod för multiplikation
double Calculator::multiply(double a, double b) {
    return a * b;
}

// Metod för division
double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Cannot divide by zero!");  // Kasta undantag om division med noll
    }
    return a / b;
}
