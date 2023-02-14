#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#include <iostream>
#include <stdexcept>

class ErrorHandler {
public:
static void checkRange(double a, double b);
static void checkIntervals(int n);
};

void ErrorHandler::checkRange(double a, double b) {
if (a >= b) {
throw std::invalid_argument("Invalid range: a must be smaller than b");
}
}

void ErrorHandler::checkIntervals(int n) {
if (n <= 0) {
throw std::invalid_argument("Invalid number of intervals: n must be greater than 0");
}
}

#endif // ERRORHANDLER_H