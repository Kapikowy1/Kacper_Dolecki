
/**

\file sequence.h
\brief Plik nagłówkowy klasy Sequence
Plik zawiera deklarację klasy Sequence, która reprezentuje sekwencję liczb rzeczywistych.
*/
#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <vector>

/**

\class Sequence
\brief Klasa reprezentująca sekwencję liczb rzeczywistych
Klasa zawiera wektor wartości liczb rzeczywistych. Zawiera konstruktor domyślny, konstruktor kopiujący i destruktor.
Zawiera także funkcję setValues(), która ustawia wartości wektora wartości.
/
class Sequence {
public:
/*
\brief Konstruktor domyślny
Tworzy obiekt klasy Sequence bez wartości wektora wartości.
*/
Sequence();
/**

\brief Konstruktor kopiujący
Tworzy kopię obiektu klasy Sequence.
\param seq - obiekt klasy Sequence, który jest kopiowany
*/
Sequence(const Sequence &seq);
/**

\brief Destruktor
Zwalnia pamięć zarezerwowaną przez obiekt klasy Sequence.
*/
~Sequence();
/**

\var values
\brief Wektor wartości liczb rzeczywistych
*/
std::vector<double> values;
/**

\brief Funkcja ustawiająca wartości wektora wartości
Funkcja ustawia wartości wektora wartości na podaną sekwencję liczb rzeczywistych.
\param vals - sekwencja liczb rzeczywistych, która jest ustawiana jako wartości wektora wartości
*/
void setValues(const std::vector<double> &vals);
};
#endif // SEQUENCE_H