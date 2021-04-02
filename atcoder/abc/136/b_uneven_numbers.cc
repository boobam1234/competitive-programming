#include <iostream>

int is_odd_digit(int num) {
  int digit = 0;
  while (num) {
    ++digit;
    num /= 10;
  }
  return digit % 2 == 1;
}

int main() {
  int n;
  std::cin >> n;

  int odd_digit_count = 0;
  for (int i = 1; i <= n; ++i) {
    if (is_odd_digit(i)) ++odd_digit_count;
  }

  std::cout << odd_digit_count << std::endl;
}
