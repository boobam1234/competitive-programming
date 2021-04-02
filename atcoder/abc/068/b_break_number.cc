#include <iostream>

int count_divide_by_two(int num) {
  int count = 0;
  while (true) {
    if (num % 2 == 1) return count;
    num /= 2;
    ++count;
  }
}

int main() {
  int n;
  std::cin >> n;

  int ans = 1;
  int max = 0;
  for (int i = 1; i <= n; ++i) {
    int divide_by_two = count_divide_by_two(i);
    if (divide_by_two > max) {
      max = divide_by_two;
      ans = i;
    }
  }
  std::cout << ans << std::endl;
}
