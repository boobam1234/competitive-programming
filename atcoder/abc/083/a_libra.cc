#include <iostream>

std::string weigh(int left_weight, int right_weight) {
  if (left_weight > right_weight) return "Left";
  if (left_weight < right_weight) return "Right";
  return "Balanced";
}

int main() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  std::cout << weigh(a + b, c + d) << '\n';
}
