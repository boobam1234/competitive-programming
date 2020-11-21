#include <iostream>
#include <vector>

int main() {
  int cd_case_num, listen_cd_num;
  std::cin >> cd_case_num >> listen_cd_num;

  std::vector<int> cds(cd_case_num);
  for (int i = 0; i < cd_case_num; ++i) {
    cds.at(i) = i + 1;
  }
  int current = 0;
  for (int i = 0; i < listen_cd_num; ++i) {
    int listen_cd;
    std::cin >> listen_cd;
    for (int j = 0; j < cd_case_num; ++j) {
      if (cds.at(j) == listen_cd) {
        std::swap(current, cds.at(j));
      }
    }
  }
  for (int i = 0; i < cd_case_num; ++i) {
    std::cout << cds.at(i) << std::endl;
  }
}
