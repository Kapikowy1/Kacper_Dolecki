#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <vector>

class Sequence {
 public:
  Sequence();
  Sequence(const Sequence &);
  ~Sequence();

  std::vector<double> values;

  void setValues(const std::vector<double> &);
};

#endif  // SEQUENCE_H

