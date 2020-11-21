#include <iostream>

int main() {
  std::string str_a, str_b;
  std::cin >> str_a >> str_b;

  std::string shorter_str = str_a.length() > str_b.length() ? str_a : str_b;
  std::cout << shorter_str << std::endl;
}
