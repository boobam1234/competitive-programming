#include <iostream>

int main () {
  int alice_num, bob_num;
  std::cin >> alice_num >> bob_num;

  if (alice_num == 1) {
    alice_num = 14;
  }
  if (bob_num == 1) {
    bob_num = 14;
  }
  if (alice_num == bob_num) {
    std::cout << "Draw" << std::endl;
  } else if (alice_num > bob_num) {
    std::cout << "Alice" << std::endl;
  } else {
    std::cout << "Bob" << std::endl;
  }
}
