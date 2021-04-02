#include <iostream>
#include <set>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::set<std::string> prizes;
  for (int i = 0; i < n; ++i) {
    std::string prize;
    std::cin >> prize;
    prizes.insert(prize);
  }
  std::cout << prizes.size() << std::endl;
}
