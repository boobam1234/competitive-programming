#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  int area = a * b;
  int length = 2 * (a + b);
  std::cout << area << " " << length << '\n';
}
