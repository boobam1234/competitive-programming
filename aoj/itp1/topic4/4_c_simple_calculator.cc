#include <iostream>

int calc(char op, int a, int b) {
  switch (op) {
    case '+':
      return a + b;
    case '-':
      return a - b;
    case '*':
      return a * b;
    default:
      return a / b;
  }
}

int main() {
  while (true) {
    int a, b;
    char op;
    std::cin >> a >> op >> b;
    if (op == '?') return 0;

    std::cout << calc(op, a, b) << std::endl;
  }
}
