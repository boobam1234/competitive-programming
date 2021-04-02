#include <cmath>
#include <iostream>

int main() {
  int n;
  std::cin >> n;

  for (int i = 0; i <= n; ++i) {
    if (std::floor(i * 1.08) == n) {
      std::cout << i << std::endl;
      return 0;
    }
  }
  std::cout << ":(" << std::endl;
}
