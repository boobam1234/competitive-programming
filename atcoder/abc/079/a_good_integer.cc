#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int thousands = n / 1000;
  int hundreds = n / 100 % 10;
  int tens = n / 10 % 10;
  int ones = n % 10;
  std::string is_good_integer;
  if (thousands == hundreds && hundreds == tens ||
    hundreds == tens && tens == ones) {
    is_good_integer = "Yes";
  } else {
    is_good_integer = "No";
  }
  std::cout << is_good_integer << std::endl;
}
