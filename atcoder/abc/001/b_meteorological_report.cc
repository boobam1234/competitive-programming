#include <iomanip>
#include <iostream>

int main() {
  double visibility_m;
  std::cin >> visibility_m;

  double visibility_km = visibility_m / 1000;
  if (visibility_km < 0.1) {
    std::cout << std::setw(2) << std::setfill('0') << 0 << std::endl;
    return 0;
  }
  if (visibility_km >= 0.1 && visibility_km <= 5) {
    double vv = visibility_km * 10;
    std::cout << std::setw(2) << std::setfill('0') << vv << std::endl;
    return 0;
  }
  if (visibility_km >= 6 && visibility_km <= 30) {
    double vv = visibility_km + 50;
    std::cout << std::setw(2) << std::setfill('0') << vv << std::endl;
    return 0;
  }
  if (visibility_km >= 35 && visibility_km <= 70) {
    double vv = (visibility_km - 30) / 5 + 80;
    std::cout << std::setw(2) << std::setfill('0') << vv << std::endl;
    return 0;
  }  
  std::cout << 89 << std::endl;
}
