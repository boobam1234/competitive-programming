#include <iostream>
#include <vector>

int main() {
  int hinaarare_num;
  std::cin >> hinaarare_num;
  std::vector<std::string> hinaarare_color(200);
  std::string hinaarare_color_count = "Three";

  for (int i = 0; i < hinaarare_num; i++) {
    std::cin >> hinaarare_color.at(i);
    if (hinaarare_color.at(i) == "Y") {
      hinaarare_color_count = "Four";
    }
  }

  std::cout << hinaarare_color_count << std::endl;

  return 0;
}
