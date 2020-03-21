#include <iostream>
#include <algorithm>

int main() {
  int width, height, x, y, r;
  std::cin >> width >> height >> x >> y >> r;

  int remaining_length = std::min(std::min(width - x, x), std::min(height - y, y));
  if (remaining_length >= r) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
}
