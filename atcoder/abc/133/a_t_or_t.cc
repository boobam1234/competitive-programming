#include <iostream>

int main() {
  int n, a, taxi_fare;
  std::cin >> n >> a >> taxi_fare;

  int train_fare = n * a;
  std::cout << std::min(train_fare, taxi_fare) << std::endl;
}
