#include <iostream>

int main() {
  int side_length, other_side_length;
  std::cin >> side_length >> other_side_length;

  int area = side_length * other_side_length;
  int all_sides_length = side_length * 2 + other_side_length * 2;
  std::cout << area << " " << all_sides_length << std::endl;
}
