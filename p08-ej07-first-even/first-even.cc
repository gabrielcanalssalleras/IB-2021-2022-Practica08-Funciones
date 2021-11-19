/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file first-even.cc
 * @author Gabriel Ángel Canals Salleras alu0101460468@ull.edu.es
 * @date 19 Nov 2021
 * @brief Checks the first even number position in an inserted serie of numbers.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P89078
 */

#include <iostream>
#include <vector>

/**
 * @brief Prints an initial message that tells the user what the program does.
 */
void PrintInitialMessage() {
  std::cout << "This program takes several natural numbers and prints ";
  std::cout << "the position of the first even number.\n\n";
  std::cout << "Insert a serie of natural numbers: \n";
}

/**
 * @brief Checks where the first even number is located.
 * @param[in] kInsertedNumbers: Vector of numbers inserted by the user.
 * @return The position of the first even number.
 */
int CheckFirstEven(const std::vector<int> kInsertedNumbers) {
  int number_being_checked{0};
  for (number_being_checked; number_being_checked < kInsertedNumbers.size(); ++number_being_checked) {
    if (kInsertedNumbers[number_being_checked] % 2 == 0) {
      return number_being_checked;
    }
  }
  return 0;
}

int main() {
  // PrintInitialMessage();
  std::vector<int> inserted_numbers;
  int new_number;
  while (std::cin) {
    std::cin >> new_number;
    inserted_numbers.push_back(new_number);
  }
  std::cout << CheckFirstEven(inserted_numbers) + 1 << std::endl;
  return 0;
}