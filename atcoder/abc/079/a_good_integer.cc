#include <iostream>

bool is_good_number(std::string num) {
  return (num[0] == num[1] && num[1] == num[2]) ||
         (num[1] == num[2] && num[2] == num[3]);
}

int main() {
  std::string n;
  std::cin >> n;
  std::cout << (is_good_number(n) ? "Yes" : "No") << '\n';
}
