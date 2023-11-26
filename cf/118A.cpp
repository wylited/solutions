#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  std::string s;
  std::string vowels = "aeiouyAEIOUY";
  std::cin >> s;

  std::string result;

  for (char c : s) {
    if (vowels.find(c) == std::string::npos) {
      result += '.';
      result += std::tolower(c);
    }
  }

  std::cout << result;

  return 0;
}
