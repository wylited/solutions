#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int t;
  int X, Y;
  std::cin >> t;

  for(int i = 0; i < t; ++i) {
    int n;
    std::cin >> n;

    std::string s;

    std::cin >> s;
    std::cout << s[n-1] << std::endl;
  }
  return 0;
}
