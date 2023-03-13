#include <iostream>

int calc_digit_sum(int num) {
  int digit_sum = 0;
  while (num) {
    digit_sum += num % 10;
    num /= 10;
  }
  return digit_sum;
}

bool is_harshad_number(int num) {
  if (num <= 0) return false;
  return num % calc_digit_sum(num) == 0;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << (is_harshad_number(n) ? "Yes" : "No") << '\n';
}
