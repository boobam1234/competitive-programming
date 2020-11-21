#include <iostream>

int main() {
  std::string str;
  std::cin >> str;

  int count = 0;
  int maxLength = 0;
  for (int i = 0; i < str.size(); ++i) {
    if (str[i] == 'A' || str[i] == 'C' || str[i] == 'G' || str[i] == 'T') {
      ++count;
      maxLength = std::max(maxLength, count);
      continue;
    }
    count = 0;
  }
  std::cout << maxLength << std::endl;
}
