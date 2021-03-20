#include <iostream>

int main() {
  int count = 0;
  while (true) {
    int x;
    std::cin >> x;
    if (x == 0) return 0;
    ++count;
    std::cout << "Case " << count << ": " << x << std::endl;
  }
}
