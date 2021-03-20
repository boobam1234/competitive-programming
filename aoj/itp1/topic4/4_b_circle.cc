#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  double r;
  std::cin >> r;
  double radius = M_PI * r * r;
  double circumference = 2 * M_PI * r;
  std::cout << std::fixed << std::setprecision(5)
    << radius << " " << circumference << std::endl;
}
