#include "sequence.h"

Sequence::Sequence() {}

Sequence::Sequence(const Sequence &seq) {
  values = seq.values;
}

Sequence::~Sequence() {}

void Sequence::setValues(const std::vector<double> &v) {
  values = v;
}