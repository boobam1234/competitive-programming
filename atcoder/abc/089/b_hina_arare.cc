#include <iostream>

int main() {
  int n;
  std::cin >> n;
  char color;
  for (int i = 0; i < n; ++i) {
    std::cin >> color;
    if (color == 'Y') {
      std::cout << "Four" << '\n';
      return 0;
    }
  }
  std::cout << "Three" << '\n';
}
