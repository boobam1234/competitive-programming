#include <iostream>
#include <vector>

int main() {
  std::vector<int> nums(3);
  for (int i = 0; i < 3; ++i) std::cin >> nums[i];
  std::sort(nums.begin(), nums.end());
  std::cout << nums[0] << " " << nums[1] << " " << nums[2] << std::endl;
}
