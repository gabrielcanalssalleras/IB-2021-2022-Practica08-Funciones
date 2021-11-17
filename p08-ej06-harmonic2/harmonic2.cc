/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file harmonic2.cc
 * @author Gabriel Ángel Canals Salleras alu0101460468@ull.edu.es
 * @date 17 Nov 2021
 * @brief Subtracts the harmonics of two natural numbers.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P58153
 */

#include <iostream>

/**
 * @brief Prints an initial message that tells the user what the program does.
 */
void PrintInitialMessage() {
  std::cout << "This program takes two natural numbers and prints ";
  std::cout << "the subtraction of their harmonic numbers\n\n";
  std::cout << "Insert two natural numbers to calculate the subtraction: \n";
}

/**
 * @brief Calculates the harmonic number from the lower index to the higher one.
 * @param[in] kFirstIndex: Final index of the final harmonic number.
 * @param[in] KSecondIndex: Initial index of the final harmonic number.
 * @return The subtraction of both harmonical numbers.
 */
double CalculateHarmonicNumber(const int kFirstIndex, const int kSecondIndex) {
  int iteration;
  double harmonic_number{0};
  for (iteration = kSecondIndex + 1; iteration <= kFirstIndex; ++iteration) {
    harmonic_number += (1 / static_cast<double>(iteration));
  }
  return harmonic_number;
}

int main() {
  // PrintInitialMessage();
  while (true) {
    int first_index;
    std::cin >> first_index;
    int second_index;
    std::cin >> second_index;
    if (!std::cin) {
      break;
    }
    double final_harmonic{CalculateHarmonicNumber(first_index, second_index)};
    std::cout.precision(10);
    std::cout << std::fixed << final_harmonic << std::endl;
  }
  return 0;
}