#include <iostream>
#include <vector>

bool can_operate(std::vector<int> &numbers) {
  for (int i = 0; i < numbers.size(); ++i) {
    if (numbers[i] % 2 != 0) return false;
  }
  return true;
}

void operate(std::vector<int> &numbers) {
  for (int i = 0; i < numbers.size(); ++i) numbers[i] /= 2;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  for (int i = 0; i < n; ++i) std::cin >> a[i];

  int count = 0;
  while (can_operate(a)) {
    operate(a);
    ++count;
  }

  std::cout << count << '\n';
}
