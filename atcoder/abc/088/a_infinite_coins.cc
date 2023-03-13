#include <iostream>

bool can_pay(int price, int one_yen_coin_num) {
  return price % 500 <= one_yen_coin_num;
}

int main() {
  int n, a;
  std::cin >> n >> a;
  std::cout << (can_pay(n, a) ? "Yes" : "No") << '\n';
}
