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



/**

@file statistics.h
@brief Plik nagłówkowy klasy Statistics.
Plik zawiera definicję klasy Statistics, która służy do obliczania całki numerycznej z podanego ciągu liczb.
*/
/**

@class Statistics
@brief Klasa służąca do obliczania całki numerycznej z podanego ciągu liczb.
Klasa zawiera metodę integrate(), która jest odpowiedzialna za obliczenie całki numerycznej.
*/
/**

@brief Konstruktor domyślny klasy Statistics.
*/
/**

@brief Konstruktor kopiujący klasy Statistics.
@param stats Obiekt klasy Statistics, który jest kopiowany.
*/
/**

@brief Destruktor klasy Statistics.
*/
/**

@brief Metoda obliczająca całkę numeryczną z podanego ciągu liczb.
@param a Dolny limit całkowania.
@param b Górny limit całkowania.
@param n Liczba podprzedziałów.
@param seq Ciąg liczb, z którego ma zostać obliczona całka numeryczna.
*/