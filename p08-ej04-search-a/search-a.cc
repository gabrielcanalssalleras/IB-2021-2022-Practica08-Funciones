/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file search-a.cc
 * @author Gabriel Ángel Canals Salleras alu0101460468@ull.edu.es
 * @date 16 Nov 2021
 * @brief Checks if the letter 'a' appears in a string.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P75149
 */

#include <iostream>

/**
 * @brief Prints an initial message that tells the user what the program does.
 */
void PrintInitialMessage() {
  std::cout << "This program takes a sequence of characters and ";
  std::cout << "checks if the letter 'a' appears.\n\n";
  std::cout << "Insert some text finished with a dot '.' to check it out:\n";
}

/**
 * @brief Checks if the newest letter is an 'a'.
 * @param[in] kGivenCharacter: The character that is being checked.
 * @return True if is an 'a'. Otherwise, false.
 */
bool CheckIsLetterA(const int kGivenCharacter) {
  int letter{kGivenCharacter};
  if (letter == 'a') {
    return true;
  } else {
    return false;
  }
}

/**
 * @brief Checks if the newest letter is an 'a'.
 * @param[in] kGivenCharacter: The character that is being checked.
 * @return True if is an 'a'. Otherwise, false.
 */
void PrintResolution(const bool kAFound) {
  if (kAFound == true) {
    std::cout << "yes\n";
  } else {
    std::cout << "no\n";
  }
}

int main() {
  // PrintInitialMessage();
  bool a_found{false};
  while (true) {
    char new_letter;
    std::cin >> new_letter;
    if (new_letter == '.') {
      break;
    }
    if(CheckIsLetterA(new_letter) == true){
      a_found = true;
    }
  }
  PrintResolution(a_found);
  return 0;
}