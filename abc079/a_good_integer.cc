#include <iostream>

int main() {
  // 入力
  std::string n;
  std::cin >> n;

  // 良い整数判定
  if (n[0] == n[1] && n[1] == n[2] ||
    n[1] == n[2] && n[2] == n[3]) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }

  return 0;
}
