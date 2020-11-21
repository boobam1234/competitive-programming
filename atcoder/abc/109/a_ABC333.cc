#include <iostream>

int main() {
  // 入力
  int a, b;
  std::cin >> a >> b;

  // 2の倍数 * c = 偶数
  if (a * b % 2 == 1) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }

  return 0;
}
