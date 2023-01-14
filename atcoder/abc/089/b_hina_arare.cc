#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n;
  std::cin >> n;
  char color;
  for (int i = 0; i < n; ++i) {
    std::cin >> color;
    if (color == 'Y') {
      std::cout << "Four" << "\n";
      return 0;
    }
  }
  std::cout << "Three" << "\n";
}
