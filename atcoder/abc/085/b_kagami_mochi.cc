#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> diameters(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> diameters.at(i);
  }

  std::vector<int> ans(101, 0);
  for (int i = 0; i < n; ++i) {
    ++ans.at(diameters.at(i));
  }
  int count = 0;
  for (int i = 1; i <= 100; ++i) {
    if (ans.at(i)) {
      ++count;
    }
  }
  std::cout << count << std::endl;
}
