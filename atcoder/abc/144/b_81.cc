#include <iostream>

int main() {
  int n;
  std::cin >> n;

  for (int i = 1; i < 10; ++i) {
    if (n % i == 0 && n / i < 10) {
      std::cout << "Yes" << std::endl;
      return 0;
    }
  }
  std::cout << "No" << std::endl;
}
