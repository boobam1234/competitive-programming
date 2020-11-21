#include <iostream>

int main() {
  int num;
  std::cin >> num;

  int max_count = 0;
  int ans = 1;
  for (int i = 1; i <= num; ++i) {
    int count = 0;
    int a = i;
    while (a % 2 == 0 && a != 0) {
      a /= 2;
      ++count;
    }
    if (count > max_count) {
      max_count = count;
      ans = i;
    }
  }
  std::cout << ans << std::endl;
}
