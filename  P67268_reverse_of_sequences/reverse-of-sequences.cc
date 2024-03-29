#include <iostream>
#include <vector>
#include <algorithm>
 
void PrintReverseSequence(const std::vector<int> kGivenSequence, const int kSequenceSize) {
  std::vector<int> reverse_order{kGivenSequence};
  std::reverse(reverse_order.begin(), reverse_order.end());
  // Print Reversed array
  int iteration;
  for (iteration = 0; iteration < kSequenceSize; iteration++) {
    std::cout << reverse_order[iteration] << " ";
  }  
  std::cout << std::endl;
}

int main() {
  std::vector<int> inserted_numbers;
  int number_of_elements;
  int iteration;
  while (std::cin) {
    std::cin >> number_of_elements; 
    for (iteration = 0; iteration < number_of_elements; iteration++) {
      int new_number;
      std::cin >> new_number;
      inserted_numbers.push_back(new_number);
    }
    PrintReverseSequence(inserted_numbers, number_of_elements);
  }    
  return 0;
}

