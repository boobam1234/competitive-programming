#include <iostream>

int main() {
  // 入力
  int s;
  std::cin >> s;

  // 自然数n ≡ 自然数nの数字和 (mod 9)
  int ans = s % 9;

  // 出力
  std::cout << ans << std::endl; 
}
