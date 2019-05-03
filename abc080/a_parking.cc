#include <iostream>

int main() {
  // 入力
  int parking_hour, a_fee, plan2_fee;
  std::cin >> parking_hour >> a_fee >> plan2_fee;

  // 最小料金
  int plan1_fee = parking_hour * a_fee;
  int minimum_fee = (plan1_fee < plan2_fee) ? plan1_fee : plan2_fee;

  // 出力
  std::cout << minimum_fee << std::endl;

  return 0;
}
