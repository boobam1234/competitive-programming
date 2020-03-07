#include <iostream>

int main() {
  int group_num;
  std::cin >> group_num;

  int sum = 0;
  for (int i = 0; i < group_num; i++) {
    int l, r;
    std::cin >> l >> r;
    sum += r - l + 1;
  }
  std::cout << sum << std::endl;
}
