#include <iostream>

int main() {
  // 入力
  int a, b;
  std::cin >> a >> b;

  // 平均切り上げ
  int round_up_avg = (a + b + 1) / 2;

  // 出力
  std::cout << round_up_avg << std::endl;

  return 0;
}
