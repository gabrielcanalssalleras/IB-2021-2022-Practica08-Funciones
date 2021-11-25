/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file vector-concatenation.cc
 * @author Gabriel Ángel Canals Salleras alu0101460468@ull.edu.es
 * @date 25 Nov 2021
 * @brief Subtracts the harmonics of two natural numbers.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P58153
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

vector<int> concatenation(const vector<int> & V1, const vector<int> & V2){
  std::vector<int> final_vector = V1;
  final_vector.insert(final_vector.end(), V2.begin(), V2.end());
  return final_vector;
}

int main() {
  int n1;
  while (cin >> n1) {
    vector<int> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<int> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];
    vector<int> res = concatenation(V1, V2);
    cout << res.size() << endl;
    for (int i = 0; i < (int)res.size(); ++i) cout << " " << res[i];
    cout << endl;
  }
}