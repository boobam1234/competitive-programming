#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  std::string is_odd_or_even = a * b % 2 == 0 ? "Even" : "Odd";
  std::cout << is_odd_or_even << std::endl;
}
