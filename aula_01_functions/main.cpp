#include <iostream>

int addThreeNumbers(int a, int b, int c) {
  return a + b + c;
}

int addTwoNumbers(int a, int b) {
  return a + b;
}

int main() {
  int firstResult = addThreeNumbers(1, 2, 3);
  int secondResult = addTwoNumbers(1, 2);

  std::cout << "Primeiro resultado: " << firstResult << std::endl;
  std::cout << "Segundo resultado: " << secondResult << std::endl;

  return 0;
}