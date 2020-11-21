#include <cmath>
#include <iostream>

int main() {
  int n, t, a;
  std::cin >> n >> t >> a;

  double min_abs = 200000;
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int height;
    std::cin >> height;
    double avg_temp = t - height * 0.006;
    if (min_abs > fabs(avg_temp - a)) {
      min_abs = fabs(avg_temp - a);
      ans = i + 1;
    };
  }
  std::cout << ans << std::endl;
}
