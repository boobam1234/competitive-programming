#include <iostream>

int calc_minimum_fee(int hour, int hourly_rate_yen, int flat_rate_yen) {
  return std::min(hour * hourly_rate_yen, flat_rate_yen);
}

int main() {
  int n, a, b;
  std::cin >> n >> a >> b;
  std::cout << calc_minimum_fee(n, a, b) << '\n';
}
