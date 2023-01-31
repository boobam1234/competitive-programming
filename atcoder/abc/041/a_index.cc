#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  std::string s;
  int i;
  std::cin >> s >> i;
  std::cout << s[i - 1] << "\n";
}
