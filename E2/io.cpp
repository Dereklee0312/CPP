#include "io.h"
#include <iostream>

int readNumber() {
  int num;
  std::cout << "Enter your Number: ";
  std::cin >> num;

  return num;
}

void writeAnswer(int sum) { std::cout << "Sum of numbers = " << sum << "\n"; }
