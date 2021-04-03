#include <cmath>
#include <iostream>
#include <vector>
#include <iomanip>
 
int get_factorial(int num) {
  int factrial = 1;
  for (int i = num; i > 1; --i) {
    factrial *= i;
  }
  return factrial;
}
 
int main() {
  int n;
  std::cin >> n;
 
  std::vector< std::vector<int> > vec(8, std::vector<int>(2));
  for (int i = 0; i < n; ++i) {
    std::cin >> vec.at(i).at(0) >> vec.at(i).at(1);
  }
  double sum = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == j) continue;
      int aaa = std::pow(vec.at(i).at(0) - vec.at(j).at(0), 2) + std::pow(vec.at(i).at(1) - vec.at(j).at(1), 2);
      sum += sqrt(aaa);
    }
  }
  std::cout << std::fixed;
  std::cout << std::setprecision(10) << sum / n << std::endl; 
}
