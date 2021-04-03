#include <iostream>

int main() {
  std::string s, t;
  std::cin >> s >> t;

  int count = 0;
  int length = s.length();
  for (int i = 0; i < length; ++i) {
    if (s[i] != t[i]) ++count;
  }

  std::cout << count << std::endl;
}
