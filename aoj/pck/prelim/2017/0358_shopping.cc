#include <iostream>

int main() {
  int my_money, a_money, book_price;
  std::cin >> my_money >> a_money >> book_price;

  if (my_money + a_money < book_price) {
    std::cout << "NA" << std::endl;
    return 0;
  }
  if (my_money >= book_price) {
    std::cout << 0 << std::endl;
    return 0;
  }
  std::cout << book_price - my_money << std::endl;
}
