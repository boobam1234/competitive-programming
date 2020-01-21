#include <iostream>
 
int main() {
  int side_length, white_num;
  std::cin >> side_length >> white_num;

  int black_num = side_length * side_length - white_num;
  std::cout << black_num << std::endl;
}
