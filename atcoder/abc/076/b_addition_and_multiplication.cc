#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  int num = 1;
  for (int i = 0; i < n; ++i) num = std::min(num * 2, num + k);
  std::cout << num << '\n';
}
