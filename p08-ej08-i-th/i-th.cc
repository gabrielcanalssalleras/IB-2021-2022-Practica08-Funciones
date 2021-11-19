/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file i-th.cc
 * @author Gabriel Ángel Canals Salleras alu0101460468@ull.edu.es
 * @date 19 Nov 2021
 * @brief Prints a requested position number in a given serie of number.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P39225
 */

#include <iostream>
#include <vector>

/**
 * @brief Prints an initial message that tells the user what the program does.
 */
void PrintInitialMessage() {
  std::cout << "This program takes a position and a serie of numbers ";
  std::cout << "and prints the number of that serie in the given position.\n\n";
  std::cout << "Insert the position and a serie of numbers: \n";
}

/**
 * @brief Prints the number in the requested position.
 * @param[in] kInsertedNumbers: Vector of numbers inserted by the user.
 * @param[in] kRequestedPosition: Position of the number requested.
 */
void PrintNumber(const std::vector<int> kInsertedNumbers, const int kRequestedPosition) {
  std::cout << "At the position " << kRequestedPosition << " there is a(n) ";
  std::cout << kInsertedNumbers[kRequestedPosition - 1] << ".\n";
}

int main() {
  // PrintInitialMessage();
  std::vector<int> inserted_numbers;
  int new_number;
  int requested_position;
  std::cin >> requested_position;
  while (std::cin) {
    std::cin >> new_number;
    inserted_numbers.push_back(new_number);
  }
  PrintNumber(inserted_numbers, requested_position);
  return 0;
}