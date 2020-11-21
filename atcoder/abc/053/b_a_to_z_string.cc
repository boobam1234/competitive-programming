#include <iostream>

int main() {
  std::string str;
  std::cin >> str;

  int a, b;
  for (int i = 0; i < str.size(); ++i) {
    if (str.at(i) == 'A') {
      a = i;
      break;
    }
  }
  std::reverse(str.begin(), str.end());
  for (int i = 0; i < str.size(); ++i) {
    if (str.at(i) == 'Z') {
      b = i;
      break;
    }
  }
  std::cout << str.size() - a - b << std::endl;
}
