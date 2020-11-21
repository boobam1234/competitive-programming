#include <iostream>

int main() {
  int n, y;
  std::cin >> n >> y;

  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j <= n - i; ++j) {
      for (int k = 0; k <= n - i - j; ++k) {
        int sum = 10000 * i + 5000 * j + 1000 * k;
        if (sum == y && i + j + k == n) {
          std::cout << i << " " << j << " " << k;
          return 0;
        }
      }
    }
  }
  std::cout << -1 << " " << -1 << " " << -1;
}
