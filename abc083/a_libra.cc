#include <iostream>

int main() {
  // 入力
  int a_weight, b_weight, c_weight, d_weight;
  std::cin >> a_weight >> b_weight >> c_weight >> d_weight;

  // 傾き判定
  int left_weight = a_weight + b_weight;
  int right_weight = c_weight + d_weight;
  std::string ans;
  if (left_weight > right_weight) {
    ans = "Left";
  } else if (left_weight < right_weight) {
    ans = "Right";
  } else {
    ans = "Balanced";
  }

  // 出力
  std::cout << ans << std::endl;

  return 0;
}
