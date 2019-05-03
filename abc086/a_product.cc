#include <iostream>

int main() {
  // 入力
  int a, b;
  std::cin >> a >> b;

  // 積の奇遇判定
  std::string ans = (a * b % 2) ? "Odd" : "Even";

  // 出力
  std::cout << ans << std::endl;

  return 0;
}
