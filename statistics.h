#ifndef STATISTICS_H
#define STATISTICS_H

#include "sequence.h"

class Statistics {
 public:
  Statistics();
  Statistics(const Statistics &);
  ~Statistics();

  double integrate(double a, double b, int n, Sequence &seq);
};

#endif  // STATISTICS_H