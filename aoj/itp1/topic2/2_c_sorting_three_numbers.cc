#include <iostream>

int main() {
  int x, y, z;
  std::cin >> x >> y >> z;

  if (x > y) {
    int tmp = x;
    x = y;
    y = tmp;
  }
  if (y > z) {
   int tmp = y;
   y = z;
   z = tmp;
  }
  if (x > y) {
    int tmp = x;
    x = y;
    y = tmp;
  }
  std::cout << x << " " << y << " " << z << std::endl;
}
