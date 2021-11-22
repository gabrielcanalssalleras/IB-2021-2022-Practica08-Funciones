/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file e-approximation.cc
  * @author Gabriel Ángel Canals Salleras alu0101460468@ull.edu.es 
  * @date Nov 22 2021
  * @brief This program prints the approximation of e, by adding the n first terms of the Taylor's series.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P11916
  */

#include <iostream>

/**
 * @brief Prints an initial message that tells the user what the program does.
 */
void PrintInitialMessage() {
  std::cout << "This program reads a natural number and prints the approximation of e,";
  std::cout << " by adding the first terms of the Taylor's series.\n\n";
}

/**
 * @brief Gets the factorial number needed for that iteration.
 * @param[in] kThisIteration: Next factorial to get.
 * @return The result of the factorial number.
 */
double CalculateFactorialNumber(const int kThisIteration) {
  double factorial_number{1};
  int iteration{2};
  for (iteration; iteration <= kThisIteration; ++iteration) {
    factorial_number *= iteration;
  }
  return factorial_number;
}

/**
 * @brief Finds the approximation to E via the Taylor's series.
 * @param[in] kRequestedTerms: Number of terms to calculate between 0 and 20.
 * @return The result of the factorial number.
 */
double GetEApproximation(const int kRequestedTerms) {
  double addition{0};
  double factorial_number;
  int iteration{0};
  for (iteration; iteration < kRequestedTerms; ++iteration) {
    factorial_number = CalculateFactorialNumber(iteration);
    addition += (1 / factorial_number);
  }
  return addition;
}

int main() {
  // PrintInitialMessage();
  int terms_requested;
  while (true) {
    std::cin >> terms_requested;
    if (!std::cin) {
      break;
    }
    std::cout << "With " << terms_requested << " term(s) we get ";
    double e_approximation = GetEApproximation(terms_requested);
    std::cout.precision(10);
    std::cout << std::fixed << e_approximation << "." << std::endl;
  } 
  return 0;
}