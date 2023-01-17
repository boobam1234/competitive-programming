#include <iostream>

int add_digit(int num) {
  int digit_sum = 0;
  while (num) {
    digit_sum += num % 10;
    num /= 10;
  }
  return digit_sum;
}

std::string is_harshad_number(int num) {
  return num % add_digit(num) == 0 ? "Yes" : "No";
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n;
  std::cin >> n;
  std::cout << is_harshad_number(n) << "\n";
}
