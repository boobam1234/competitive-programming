#include <iostream>

int main() {
  int n;
  std::cin >> n;
  std::string color = n % 2 == 0 ? "Blue" : "Red";
  std::cout << color << std::endl;
}
