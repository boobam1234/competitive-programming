#include <iostream>

int main() {
  int n, l, r;
  std::cin >> n;
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    std::cin >> l >> r;
    sum += r - l + 1;
  }
  std::cout << sum << '\n';
}
