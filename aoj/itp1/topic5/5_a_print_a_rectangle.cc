#include <iostream>

int main() {
  while (true) {
    int height, width;
    std::cin >> height >> width;
    if (height == 0 && width == 0) return 0;

    for (int i = 0; i < height; ++i) {
      for (int j = 0; j < width; ++j) {
        std::cout << "#";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
}
