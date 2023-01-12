#include <iostream>

std::string is_good_number(std::string num) {
  return (num[0] == num[1] && num[1] == num[2]) || (num[1] == num[2] && num[2] == num[3])
    ? "Yes"
    : "No";
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  std::string n;
  std::cin >> n;
  std::cout << is_good_number(n) << "\n";
}
