#include <algorithm>
#include <iostream>

int main() {
  int a, b, c, d, e, f;
  std::cin >> a >> b >> c >> d >> e >> f;
  std::cout << a + b + c + d - std::min({a, b, c, d}) + std::max(e, f) << std::endl; 
}
