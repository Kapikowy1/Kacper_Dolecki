#include "sequence.h"

/**

@file sequence.cpp
@author Kacper Dolecki

@brief Plik zawierający implementację klasy Sequence
*/
/**

@brief Konstruktor domyślny
*/
Sequence::Sequence() {}
/**

@brief Konstruktor kopiujący
@param seq Obiekt kopiowany
*/
Sequence::Sequence(const Sequence &seq) {
values = seq.values;
}
/**

@brief Destruktor
*/
Sequence::~Sequence() {}
/**

@brief Funkcja ustawiająca wartości wektora values
@param v Wektor wartości do ustawienia
*/
void Sequence::setValues(const std::vector<double> &v) {
values = v;
}