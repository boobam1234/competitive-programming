#include <iostream>
 
int main() {
  int current_rating, next_performance;
  std::cin >> current_rating >> next_performance;

  int next_rating = next_performance * 2 - current_rating;
  std::cout << next_rating << std::endl;
}
