#include <iostream>

int main() {
  int n;
  std::cin>> n;
  int min = 1000000;
  int max = -1000000;
  int64_t sum = 0;
  int a;
  for (int i = 0; i < n; ++i) {
    std::cin >> a;
    min = std::min(min, a);
    max = std::max(max, a);
    sum += a;
  }
  std::cout << min << " " << max << " " << sum << std::endl;
}
