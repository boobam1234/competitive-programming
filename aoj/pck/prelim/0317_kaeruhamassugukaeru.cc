#include <iostream>

int main() {
  int distance, big_jump_length;
  std::cin >> distance >> big_jump_length;
  if (distance % big_jump_length == 0) {
    std::cout << distance / big_jump_length << std::endl;
    return 0;
  }
  std::cout << distance / big_jump_length + distance % big_jump_length << std::endl;
}
