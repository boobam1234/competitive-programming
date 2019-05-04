#include <iostream>

int main() {
  // 入力
  int num;
  std::cin >> num;

  // 良い整数判定
  int thousands_place = num / 1000;
  int hundreds_place = num % 1000 / 100;
  int tens_place = num % 100 / 10;
  int ones_place = num % 10;
  std::string is_good_integer;
  if ((thousands_place == hundreds_place && hundreds_place == tens_place) || 
    (hundreds_place == tens_place && tens_place == ones_place)) {
      is_good_integer = "Yes";
  } else {
    is_good_integer = "No";
  }

  // 出力
  std::cout << is_good_integer << std::endl;

  return 0;
}
