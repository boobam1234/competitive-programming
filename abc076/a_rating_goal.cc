#include <iostream>

int main() {
  // 入力
  int current_rating;
  int target_rating;
  std::cin >> current_rating >> target_rating;

  // 計算
  int next_performance = target_rating * 2 - current_rating;

  // 出力
  std::cout << next_performance << std::endl;

  return 0;
}
