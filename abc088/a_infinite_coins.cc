#include <iostream>

int main() {
  // 入力
  int payment, one_yen_num;
  std::cin >> payment >> one_yen_num;

  // 計算
  int required_one_yen_num = payment % 500;
  std::string ans;
  if (one_yen_num >= required_one_yen_num) {
    ans = "Yes";
  } else {
    ans = "No";
  }

  // 出力
  std::cout << ans << std::endl;

  return 0;
}
