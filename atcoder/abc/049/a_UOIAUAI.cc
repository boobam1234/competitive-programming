#include <iostream>

bool is_vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  char c;
  std::cin >> c;
  std::cout << (is_vowel(c) ? "vowel" : "consonant") << "\n";
}
