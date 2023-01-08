#include <iostream>

std::string can_pay(int price, int one_yen_coin_num) {
  return price % 500 <= one_yen_coin_num ? "Yes" : "No";
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, a;
  std::cin >> n >> a;
  std::cout << can_pay(n, a) << "\n";
}
