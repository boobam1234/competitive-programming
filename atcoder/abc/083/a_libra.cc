#include <iostream>

int main() {
  int a_weight, b_weight, c_weight, d_weight;
  std::cin >> a_weight >> b_weight >> c_weight >> d_weight;

  int left_weight = a_weight + b_weight;
  int right_weight = c_weight + d_weight;
  std::string balance;
  if (left_weight > right_weight) {
    balance = "Left";
  } else if (left_weight < right_weight) {
    balance = "Right";
  } else {
    balance = "Balanced";
  }
  std::cout << balance << std::endl;
}
