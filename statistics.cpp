#include "statistics.h"
#include <cmath>

Statistics::Statistics() {}

Statistics::Statistics(const Statistics &stat) {}

Statistics::~Statistics() {}

double Statistics::integrate(double a, double b, int n, Sequence &seq) {
  double h = (b - a) / n;
  double result = 0;

  for (int i = 0; i < n; i++) {
    double x = a + i * h;
    result += seq.values[i] * h;
  }

  return result;
}
