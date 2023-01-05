#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, a;
  std::cin >> n >> a;
  std::cout << n * n - a << "\n";
}
