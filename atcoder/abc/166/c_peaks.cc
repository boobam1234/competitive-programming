#include <iostream>
#include <vector>

int main() {
  int obs_num, road_num;
  std::cin >> obs_num >> road_num;
  std::vector<int> obs_elevations(obs_num);
  for (int i = 0; i < obs_num; ++i) std::cin >> obs_elevations[i];

  std::vector<bool> is_good_obs(obs_num, true);
  for (int i = 0; i < road_num; ++i) {
    int a, b;
    std::cin >> a >> b;
    --a;
    --b;
    if (obs_elevations[a] <= obs_elevations[b]) is_good_obs[a] = false;
    if (obs_elevations[a] >= obs_elevations[b]) is_good_obs[b] = false;
  }

  int count_good_obs = 0;
  for (int i = 0; i < obs_num; ++i) {
    if (is_good_obs[i]) ++count_good_obs;
  }
  std::cout << count_good_obs << std::endl;
}
