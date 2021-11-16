/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file harmonic1.cc
 * @author Gabriel Ángel Canals Salleras alu0101460468@ull.edu.es
 * @date 16 Nov 2021
 * @brief Prints the n-th harmonic number.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P59539
 */

#include <iostream>

/**
 * @brief Prints an initial message that tells the user what the program does.
 */
void PrintInitialMessage() {
  std::cout << "This program takes a natural number and prints ";
  std::cout << "the n-th harmonic number, being n the given number\n\n";
  std::cout << "Insert some text finished with a dot '.' to check it out:\n";
}

/**
 * @brief Calculates the harmonic number with the given index.
 * @param[in] kIndex: Index of the harmonic number.
 * @return The harmonic number.
 */
double CalculateHarmonicNumber(const int kIndex) {
  int iteration;
  double harmonic_number;
  for (iteration = 1; iteration <= kIndex; ++iteration) {
    harmonic_number += (1 / static_cast<double>(iteration));
  }
  return harmonic_number;
}

int main() {
  // PrintInitialMessage();
  int index;
  std::cin >> index;
  std::cout.precision(4);
  std::cout << std::fixed << CalculateHarmonicNumber(index) << std::endl;
  return 0;
}