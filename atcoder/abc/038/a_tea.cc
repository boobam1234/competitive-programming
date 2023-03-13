#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  std::cout << (s.back() == 'T' ? "YES" : "NO") << '\n';
}
