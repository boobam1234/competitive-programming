#include <iostream>

int main() {
  int a, b, k;
  std::cin >> a >> b >> k;

  int count = 0;
  for (int i = std::min(a, b); i >= 1; --i) {
    if (a % i == 0 && b % i == 0) {
      ++count;
    }
    if (count == k) {
      std::cout << i << std::endl;
      break;
    }
  }
}
