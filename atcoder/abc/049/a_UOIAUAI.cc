#include <iostream>

bool is_vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
  char c;
  std::cin >> c;
  std::cout << (is_vowel(c) ? "vowel" : "consonant") << '\n';
}
