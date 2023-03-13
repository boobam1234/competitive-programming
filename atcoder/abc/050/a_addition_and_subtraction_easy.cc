#include <iostream>

int main() {
  int a, b;
  char op;
  std::cin >> a >> op >> b;
  std::cout << (op == '+' ? a + b : a - b) << '\n';
}
