#include <iostream>

int main() {
  int num;
  std::cin >> num;

  std::string color_count = "Three";
  for (int i = 0; i < num; i++) {
    std::string color;
    std::cin >> color;
    if (color == "Y") {
      color_count = "Four";
      break;
    }
  }
  std::cout << color_count << std::endl;
}
