#include "statistics.h"
#include <cmath>
/**

Obliczanie całki funkcji f(x) w przedziale [a,b] przy użyciu metody prostokątów.
Wzór użyty do obliczania całki wygląda następująco:
\f[
\int_{a}^{b}f(x),dx \approx h \cdot \left(\frac{f(a) + f(a + h) + f(a + 2h) + ... + f(b - h) + f(b)}{2}\right)
\f]
gdzie h = \f$\frac{b-a}{n}\f$.
*/
/**

@file statistics.cpp
@author Kacper Dolecki

@brief Plik implementacji klasy Statistics.
*/
/**

@brief Konstruktor domyślny klasy Statistics.
Inicjalizuje nowy obiekt klasy Statistics bez parametrów.
*/
Statistics::Statistics() {}
/**

@brief Konstruktor kopiujący klasy Statistics.
Tworzy kopię obiektu klasy Statistics.
@param stat Referencja do obiektu klasy Statistics, który jest kopiowany.
*/
Statistics::Statistics(const Statistics &stat) {}
/**

@brief Destruktor klasy Statistics.
Usuwa obiekt klasy Statistics i zwalnia zaalokowane zasoby.
*/
Statistics::~Statistics() {}
/**

@brief Funkcja obliczająca całkę numeryczną.
Funkcja oblicza całkę numeryczną funkcji określonej przez wartości w sekwencji seq w przedziale [a,b].
Całka jest obliczana za pomocą metody prostokątów.
@param a Dolna granica przedziału całkowania.
@param b Górna granica przedziału całkowania.
@param n Liczba prostokątów, które mają być użyte do obliczenia całki.
@param seq Referencja do obiektu klasy Sequence, którego wartości definiują funkcję.
@return Wartość numerycznej całki funkcji.
*/
double Statistics::integrate(double a, double b, int n, Sequence &seq) {
double h = (b - a) / n;
double result = 0;
for (int i = 0; i < n; i++) {
double x = a + i * h;
result += seq.values[i] * h;
}

return result;
}