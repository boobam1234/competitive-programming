#include <iostream>

int count_divisor_num(int num) {
  int divisor_num = 2;
  for (int i = 2; i <= num / 2; ++ i) {
    if (num % i == 0) ++divisor_num;
  }
  return divisor_num;
}

int main() {
  int n;
  std::cin >> n;

  int ans = 0;
  for (int i = 105; i <= n; i += 2) {
    if (count_divisor_num(i) == 8) ++ans;
  }

  std::cout << ans << std::endl;
}
