#include <iostream>

int main() {
  int num;
  std::cin >> num;

  int ans_count = 0;
  for (int i = 1; i <= num; i += 2) {
    int divisor_count = 0;
    for (int j = 1; j <= i; ++j) {
      if (i % j == 0) ++divisor_count;
    }
    if (divisor_count == 8) ++ans_count;
  }
  std::cout << ans_count << std::endl;
}
