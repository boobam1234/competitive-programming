#include <iostream>

int main() {
  int payment_amount, one_yen_coin_num;
  std::cin >> payment_amount >> one_yen_coin_num;
  
  std::string can_pay =  one_yen_coin_num >= payment_amount % 500 ? "Yes" : "No";
  std::cout << can_pay << std::endl;
}
