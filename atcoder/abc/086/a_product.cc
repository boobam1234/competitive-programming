#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  std::string ans = a * b % 2 == 0 ? "Even" : "Odd";
  std::cout << ans << std::endl;
}
