#include <iostream>

int main() {
  int n, a, b;
  std::cin >> n >> a >> b;

  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    std::string str = std::to_string(i);
    int sum = 0;
    for (int j = 0; j < str.length(); ++j) {
      int num = str.at(j) - '0';
      sum += num;
    }
    if (sum >= a && sum <= b) {
      ans += i;
    }
  }
  std::cout << ans << std::endl;
}
