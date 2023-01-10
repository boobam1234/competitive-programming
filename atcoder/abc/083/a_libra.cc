#include <iostream>

std::string weigh(int left_weight, int right_weight) {
  if (left_weight > right_weight) return "Left";
  if (left_weight < right_weight) return "Right";
  return "Balanced";
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  std::cout << weigh(a + b, c + d) << "\n";
}
