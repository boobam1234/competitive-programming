#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>

double getDist(double x1, double y1, double x2, double y2) {
  return std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
  int num;
  std::cin >> num;

  std::vector<int> x(num);
  std::vector<int> y(num);
  for (int i = 0; i < num; ++i) {
    std::cin >> x.at(i) >> y.at(i);
  }
  double maxDist = 0;
  for (int i = 0; i < num; ++i) {
    for (int j = i + 1; j < num; ++j) {
      maxDist = std::max(maxDist, getDist(x.at(i), y.at(i), x.at(j), y.at(j)));
    }
  }
  std::cout << std::fixed << std::setprecision(6) << maxDist << std::endl;
}
