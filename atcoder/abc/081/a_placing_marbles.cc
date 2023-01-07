#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int marble_placement;
  std::cin >> marble_placement;
  std::cout << marble_placement % 9 << "\n";
}
