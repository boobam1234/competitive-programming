#include <iostream>

int main() {
  // 入力
  int a, b;
  std::cin >> a >> b;

  // 処理
  int ans;
  if (b % a == 0) {
    ans = b + a;
  } else {
    ans = b - a;
  }

  // 出力
  std::cout << ans << std::endl;

  return 0;
}
