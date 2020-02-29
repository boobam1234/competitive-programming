#include <iostream>

int main() {
  // 入力
  int a, b;
  std::string op;
  std::cin >> a >> op >> b;

  // 式の値
  int ans;
  if (op == "+") {
    ans = a + b;
  } else {
    ans = a - b;
  }

  // 出力
  std::cout << ans << std::endl;

  return 0;
}
