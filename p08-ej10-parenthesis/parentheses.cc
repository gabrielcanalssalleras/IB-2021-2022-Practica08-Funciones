/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file parentheses.cc
 * @author Gabriel Ángel Canals Salleras alu0101460468@ull.edu.es
 * @date 19 Nov 2021
 * @brief Checks if a sequence of parentheses close correctly.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P31111
 */

#include <iostream>

/**
 * @brief Prints an initial message that tells the user what the program does.
 */
void PrintInitialMessage() {
  std::cout << "This program takes several parentheses and ";
  std::cout << "checks if they close correctly.\n\n";
  std::cout << "Insert a sequence of parentheses: \n";
}

/**
 * @brief Checks if the user had inserted an open parentheses.
 * @param[in] kNewParentheses: New parentheses.
 * @return 1 if it is an open one. Otherwise, 0.
 */
int CountOpenParenthesis(const char kNewParentheses) {
  int letter{kNewParentheses};
  if (letter == '(') {
    return 1;
  } else {
    return 0;
  }
}

/**
 * @brief Checks if the user had inserted a closed parentheses.
 * @param[in] kNewParentheses: New parentheses.
 * @return 1 if it is a closed one. Otherwise, 0.
 */
int CountClosedParenthesis(const char kNewParentheses) {
  int letter{kNewParentheses};
  if (letter == ')') {
    return 1;
  } else {
    return 0;
  }
}

/**
 * @brief Tells the user if the parentheses are correctly closed.
 * @param[in] kCorrectlyClosed: Resolution after checking.
 */
void PrintResolution(const bool kCorrectlyClosed) {
  if (kCorrectlyClosed == true) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
}

/**
 * @brief Checks if an incorrect closing character has been inserted.
 * @param[in] kClosedOnes: Current closing parentheses.
 * @param[in] kOpenOnes: Current opening parentheses.
 * @param[in] kNewLetter: New character inserted by the user.
 * @return false in case of incorrect closing.
 */
bool CheckSequence (const int kClosedOnes, const int kOpenOnes, const char kNewLetter) {
  if (kNewLetter == ')' && kOpenOnes == kClosedOnes) {
    return false;
  } else {
    return true;
  }
}

/**
 * @brief Checks if an incorrect opening character has been inserted.
 * @param[in] kClosedOnes: Current closing parentheses.
 * @param[in] kOpenOnes: Current opening parentheses.
 * @param[in] kLastLetter: Last character inserted by the user.
 * @return false in case of incorrect opening.
 */
bool CheckLastLetter (const int kClosedOnes, const int kOpenOnes, const int kLastLetter) {
  if (kLastLetter == '(' || kOpenOnes != kClosedOnes) {
    return false;
  } else {
    return true;
  }
}

int main() {
  // PrintInitialMessage();
  int open_parentheses{0};
  int closed_parentheses{0};
  bool correctly_closed{true};
  char last_letter;
  while (std::cin.peek() != '\n') {
    char new_letter;
    std::cin >> new_letter;
    last_letter = new_letter;
    correctly_closed = CheckSequence(closed_parentheses, open_parentheses, new_letter);
    open_parentheses += CountOpenParenthesis(new_letter);
    closed_parentheses += CountClosedParenthesis(new_letter);
  }
  correctly_closed = CheckLastLetter(closed_parentheses, open_parentheses, last_letter);
  PrintResolution(correctly_closed);
  return 0;
}