#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int r, g;
  std::cin >> r >> g;
  std::cout << g * 2 - r << "\n";
}
