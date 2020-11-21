#include <iostream>

int getDigit (int num) {
  int digit = 0;
  while (num != 0) {
    num /= 10;
    ++digit;
  }
  return digit;
}

int main() {
  int num;
  std::cin >> num;

  int count = 0;
  for (int i = 1; i <= num; ++i) {
    if (getDigit(i) % 2 == 1) ++count;
  }
  std::cout << count << std::endl;
}
