#include <iostream>
#include <vector>

int main() {
  int num;
  std::cin >> num;
  std::vector<int> a(num);
  for (int i = 0; i < num; ++i) std::cin >> a.at(i);

  int ans = 0;
  for (int i = 0; i < num; ++i) {
    for (int j = 0; j < num; ++j) {
      ans = std::max(ans, std::abs(a.at(i) - a.at(j)));
    }
  }
  std::cout << ans << std::endl;
}
