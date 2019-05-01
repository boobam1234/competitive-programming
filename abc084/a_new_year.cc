#include <iostream>

int main() {
  // 入力
  int current_time;
  std::cin >> current_time;

  // 計算
  int two_days_hour = 48;
  int left_time = two_days_hour - current_time;

  // 出力
  std::cout << left_time << std::endl;

  return 0;
}
