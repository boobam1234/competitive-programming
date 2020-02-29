#include <iostream>

int main() {
  // 入力
  int a, b, h;
  std::cin >> a >> b >> h;

  // 台形の面積
  int area_of_trapezoid = (a + b) * h / 2;

  // 出力
  std::cout << area_of_trapezoid << std::endl;

  return 0;
}
