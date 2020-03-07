#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  int palindromic_number_count = 0;
  for (int i = a; i <= b; i++) {
    int one_thousands_place = i / 10000;
    int thousands_place = i / 1000 % 10;
    int tens_place = i / 10 % 10;
    int ones_place = i % 10;
    if (one_thousands_place == ones_place && thousands_place == tens_place) {
      palindromic_number_count++;
    }
  }
  std::cout << palindromic_number_count << std::endl;
}
