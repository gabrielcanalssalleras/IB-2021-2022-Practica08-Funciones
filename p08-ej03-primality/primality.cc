/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file primality.cc
 * @author Gabriel Ángel Canals Salleras alu0101460468@ull.edu.es
 * @date 16 Nov 2021
 * @brief Determines if the inserted numbers are prime numbers.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P48713
 */

#include <iostream>
#include <cmath>
#include <vector>

/**
 * @brief Prints an initial message that tells the user what the program does.
 */
void PrintInitialMessage() {
  std::cout << "This program tells if the inserted numbers are prime numbers.\n\n";
  std::cout << "How many numbers you want to check?\n";
}

/**
 * @brief Checks if the next number is a prime number.
 * @param[in] kNumberToCheck: The next number inserted by the user.
 * @return true if it is a prime number or false if it is not.
 */
bool CheckPrime(const int kNumberToCheck) {
  int number_checked{kNumberToCheck};
  if (number_checked == 1 || number_checked == 0) {
    return false;
  } else {
    for(int iteration = 2; iteration * iteration <= number_checked; ++iteration) {
      if (number_checked % iteration == 0) {
        return false;
      }
    }
    return true;
  }
}

/**
 * @brief Prints the resolution after checking the number.
 * @param[in] kNumberToCheck: The next number inserted by the user.
 */
void PrintPrime(const int kNumberToCheck){
  if (CheckPrime(kNumberToCheck)) {
    std::cout << kNumberToCheck << " is prime\n"; 
  } else {
    std::cout << kNumberToCheck << " is not prime\n";
  }
}

int main() {
  // PrintInitialMessage
  int number_of_checks;
  std::cin >> number_of_checks;
  std::vector<int> numbers_to_check;
  int iteration;
  for (iteration = 0; iteration < number_of_checks; ++iteration) {
    int new_number;
    std::cin >> new_number;
    numbers_to_check.push_back(new_number); 
  }
  for (iteration = 0; iteration < number_of_checks; ++iteration) {
    PrintPrime(numbers_to_check[iteration]);
  }
  return 0;
}