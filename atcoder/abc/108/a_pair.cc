#include <iostream>

int main() {
  int num;
  std::cin >> num;

  int even = num / 2;
  int odd = num - even;

  std::cout << even * odd << std::endl;
}
