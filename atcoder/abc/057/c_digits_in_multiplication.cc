#include <iostream>

int get_digit (long num) {
  int digit = 0;
  while (num != 0) {
    num /= 10;
    ++digit;
  }
  return digit;
}

int main() {
  long n;
  std::cin >> n;

  int ans = 11;
  for (long i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      ans = std::min(ans, std::max(get_digit(n / i), get_digit(i)));
    }
  }
  std::cout << ans << std::endl;
}
