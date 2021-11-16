/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file divisors.cc
 * @author Gabriel Ángel Canals Salleras alu0101460468@ull.edu.es
 * @date 16 Nov 2021
 * @brief Prints in order all divisors of a natural number.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P39308
 */

#include <iostream>
#include <cmath>

/**
 * @brief Prints an initial message that tells the user what the program does.
 */
void PrintInitialMessage() {
  std::cout << "This program takes a number and prints all its divisors in order.\n\n";
  std::cout << "Insert a natural number: ";
}

/**
 * @brief Checks if the next number is a divisor of the given number.
 * @param[in] kGivenNumber: Number inserted by the user.
 * @param[in] kNextDivisor: Number to be checked as a divisor.
 * @return True if it is a divisor or false if it is not.
 */
bool CheckIsDivisor(const int kGivenNumber, const int kNextDivisor) {
  if(kGivenNumber % kNextDivisor == 0) {
    return true;
  } else {
    return false;
  }
}

/**
 * @brief Gets a large divisor of the give number from a small one.
 * @param[in] kGivenNumber: Number inserted by the user.
 * @param[in] kSmallDivisor: The small divisor with which we can obtain a large one.
 * @return A large divisor of the inserted number.
 */
int GetLargeDivisor(const int kGivenNumber, const int kSmallDivisor) {
  int large_divisor = kGivenNumber / kSmallDivisor;
  return large_divisor;
}

/**
 * @brief Prints all the divisors lower than the square root of the number.
 * @param[in] kGivenNumber: Number inserted by the user.
 */
void PrintSmallDivisors(const int kGivenNumber) {
  int iteration;
  for (iteration = 1; iteration <= sqrt(kGivenNumber); ++iteration) {
    if (CheckIsDivisor(kGivenNumber, iteration)) {
      std::cout << " ";
      std::cout << iteration;
    }
  }
}

/**
 * @brief Prints all the divisors higher than the square root of the number.
 * @param[in] kGivenNumber: Number inserted by the user.
 */
void PrintLargeDivisors(const int kGivenNumber) {
  int iteration;
  int next_large_divisor;
  for (iteration = static_cast<int>(sqrt(kGivenNumber)); iteration >= 1; --iteration) {
    if (CheckIsDivisor(kGivenNumber, iteration) && iteration != sqrt(kGivenNumber)) {
      std::cout << " ";
      next_large_divisor = GetLargeDivisor(kGivenNumber, iteration);
      std::cout << next_large_divisor;
    }
  }
}

int main() {
  // PrintInitialMessage();
  while(true){
    int new_number;
    std::cin >> new_number;
    if(!std::cin) {
      break;
    }
    std::cout << "divisors of " << new_number << ":";
    PrintSmallDivisors(new_number);
    PrintLargeDivisors(new_number);
    std::cout << std::endl;
  }
  return 0;
}