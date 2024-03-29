#include <iostream>

int main() {
  int n, k, x;
  std::cin >> n >> k;
  int total_distance = 0;
  for (int i = 0; i < n; ++i) {
    std::cin >> x;
    total_distance += std::min(x, k - x) * 2;
  }
  std::cout << total_distance << '\n';
}
