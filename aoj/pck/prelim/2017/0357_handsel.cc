#include <iostream>

int main() {
  int one, two, three, four;
  std::cin >> one >> two >> three >> four;
  int total_sec = one + two + three + four;
  int min = total_sec / 60;
  int sec = total_sec % 60;
  std::cout << min << std::endl << sec << std::endl;
}
