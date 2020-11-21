#include <iostream>

int main() {
  std::string s, t;
  std::cin >> s >> t;
  std::sort(s.begin(), s.end());
  std::sort(t.begin(), t.end(), std::greater<int>());
  if (s < t) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
}
