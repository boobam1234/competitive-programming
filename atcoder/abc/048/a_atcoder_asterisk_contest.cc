#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  std::string s1, s2, s3;
  std::cin >> s1 >> s2 >> s3;
  std::cout << s1[0] << s2[0] << s3[0] << "\n";
}
