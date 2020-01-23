#include <iostream>

int main() {
  int hour, rate, flat_fee;
  std::cin >> hour >> rate >> flat_fee;

  int per_hour_fee = rate * hour;
  int min_parking_fee = per_hour_fee > flat_fee ? flat_fee : per_hour_fee;
  std::cout << min_parking_fee << std::endl;
}
