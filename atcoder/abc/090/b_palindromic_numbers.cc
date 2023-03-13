#include <algorithm>
#include <iostream>

bool is_palindrome_num(int num) {
  std::string num_str = std::to_string(num);
  std::reverse(num_str.begin(), num_str.end());
  return num == std::stoi(num_str);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  int count = 0;
  for (int i = a; i <= b; ++i) {
    if (is_palindrome_num(i)) ++count;
  }
  std::cout << count << '\n';
}
