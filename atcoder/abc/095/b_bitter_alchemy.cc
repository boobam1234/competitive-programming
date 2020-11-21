#include <iostream>
#include <vector>

int main() {
  int n, x;
  std::cin >> n >> x;

  std::vector<int> donuts(n);
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    std::cin >> donuts.at(i);
    sum += donuts.at(i);
  }
  int remaining = x - sum;
  int min = *std::min_element(donuts.begin(), donuts.end());
  std::cout << n + remaining / min << std::endl;
}
