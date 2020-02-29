#include <iostream>

int main() {
  // 入力
  int date;
  std::cin >> date;

  // 出力文字列の判定
  std::string event;
  if (date == 25) {
    event = "Christmas";
  } else if (date == 24) {
    event = "Christmas Eve";
  } else if (date == 23) {
    event = "Christmas Eve Eve";
  } else {
    event = "Christmas Eve Eve Eve";
  }

  // 出力
  std::cout << event << std::endl;
  
  return 0;
}
