#include <iostream>

int main() {
  std::string str;
  std::cin >> str;

  std::string ans;
  for (int i = 0; i < str.size(); i += 2) ans.push_back(str.at(i));
  std::cout << ans << std::endl;
}
