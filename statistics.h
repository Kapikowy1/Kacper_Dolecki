#ifndef STATISTICS_H
#define STATISTICS_H

#include "errorhandler.h"
#include "sequence.h"

/**

Obliczanie całki funkcji f(x) w przedziale [a,b] przy użyciu metody prostokątów.
Wzór użyty do obliczania całki wygląda następująco:
\f[
\int_{a}^{b}f(x),dx \approx h \cdot \left(\frac{f(a) + f(a + h) + f(a + 2h) + ... + f(b - h) + f(b)}{2}\right)
\f]
gdzie h = \f$\frac{b-a}{n}\f$.
*/
/*!

@file statistics.h
@brief Plik zawierający definicję klasy Statistics do obliczania całki metodą prostokątów
Plik zawiera definicję klasy Statistics, która implementuje funkcję integrate do obliczania
całki funkcji za pomocą metody prostokątów.



@class Statistics
@brief Klasa do obliczania całki metodą prostokątów
Klasa Statistics implementuje funkcję integrate do obliczania całki funkcji za pomocą metody prostokątów.

@brief Konstruktor domyślny klasy Statistics
Inicjalizuje instancję klasy Statistics.

@brief Konstruktor kopiujący klasy Statistics
Inicjalizuje nową instancję klasy Statistics na podstawie istniejącej.


@brief Destruktor klasy Statistics
Usuwa instancję klasy Statistics.


@brief Funkcja do obliczania całki metodą prostokątów
Funkcja integrate oblicza całkę funkcji za pomocą metody prostokątów.
@param a - lewy kraniec przedziału całkowania
@param b - prawy kraniec przedziału całkowania
@param n - liczba prostokątów
@param seq - obiekt typu Sequence zawierający wartości funkcji
@return Wartość całki obliczona metodą prostokątów
*/
class Statistics {
 public:
  Statistics();
  Statistics(const Statistics &);
  ~Statistics();

  double Statistics::integrate(double a, double b, int n, Sequence &seq) {
  ErrorHandler::checkRange(a, b);
  ErrorHandler::checkIntervals(n);
  }

#endif  // STATISTICS_H






