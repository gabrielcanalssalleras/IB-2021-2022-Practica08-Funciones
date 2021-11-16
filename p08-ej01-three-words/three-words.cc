/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file three-words.cc
 * @author Gabriel Ángel Canals Salleras alu0101460468@ull.edu.es
 * @date 16 Nov 2021
 * @brief Prints three words in the reverse order they entered.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P62421
 */

#include <iostream>
#include <string>

/**
 * @brief Prints an initial message that tells the user what the program does.
 */
void PrintInitialMessage() {
  std::cout << "This program takes three words and prints them in reverse order.\n\n";
  std::cout << "Insert three words: ";
}

/**
 * @brief Prints the given words in reverse order.
 * @param[in] kFirstWord: First word inserted by the user.
 * @param[in] kSecondWord: Second word inserted by the user.
 * @param[in] kThirdWord: Third word inserted by the user.
 */
void PrintGivenWords(const std::string kFirstWord, const std::string kSecondWord, const std::string kThirdWord) {
  std::cout << kThirdWord << " ";
  std::cout << kSecondWord << " ";
  std::cout << kFirstWord << std::endl;
}

int main() {
  // PrintInitialMessage();
  std::string first_word;
  std::cin >> first_word;
  std::string second_word;
  std::cin >> second_word;
  std::string third_word;
  std::cin >> third_word;
  PrintGivenWords(first_word, second_word, third_word);
  return 0;
}