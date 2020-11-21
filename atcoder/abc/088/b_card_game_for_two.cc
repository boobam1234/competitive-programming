#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> cards(n);
  for (int i = 0; i < n; ++i) std::cin >> cards.at(i);

  std::sort(cards.begin(), cards.end());
  int alice = 0;
  int bob = 0;
  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0) {
      alice += cards.at(i);
      continue;
    } 
    bob += cards.at(i);
  }
  std::cout << std::abs(alice - bob) << std::endl;
}
