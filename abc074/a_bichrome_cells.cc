#include <iostream>

int main() {
  // 入力
  int total_squares;
  int white_num;
  std::cin >> total_squares >> white_num;

  // 黒色に塗ることになるマスの数
  int black_num = total_squares * total_squares - white_num;

  // 出力
  std::cout << black_num << std::endl;

  return 0;
}
