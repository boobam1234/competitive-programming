#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  int divisor_num = 0;
  for (int i = a; i <= b; ++i) {
    if (c % i == 0) ++divisor_num;
  }
  std::cout << divisor_num << std::endl;
}
