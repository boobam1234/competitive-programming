#include <iostream>

int main() {
  int length;
  std::string str;
  std::cin >> length >> str;

  int count = 0;
  for (int i = 2; i < length; ++i) {
    if (str.at(i - 2) == 'A' && str.at(i - 1) == 'B' && str.at(i) == 'C') {
      ++count;  
    }
  }
  std::cout << count << std::endl;
}
