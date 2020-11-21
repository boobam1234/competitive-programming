#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> num(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> num.at(i);
    if (num.at(i) % 2 == 1) {
      std::cout << 0 << std::endl;
      return 0;
    }
  }
  int count = 0;
  bool is_break = false;
  while (true) {
    ++count;
    for (int i = 0; i < n; ++i) {
      num.at(i) /= 2;
      if (num.at(i) % 2 == 1) {
        is_break = true;
        break;
      }
    }
    if (is_break) {
      break;
    }
  }
  std::cout << count << std::endl;
}
