#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> staffs(n);
  for (int i = 0; i < n - 1; ++i) {
    int boss_num;
    std::cin >> boss_num;
    ++staffs[boss_num - 1];
  }
  for (int i = 0; i < n; ++i) std::cout << staffs[i] << std::endl;
}
