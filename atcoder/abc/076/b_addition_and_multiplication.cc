#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, k;
  std::cin >> n >> k;
  int num = 1;
  for (int i = 0; i < n; ++i) num = std::min(num * 2, num + k);
  std::cout << num << "\n";
}
