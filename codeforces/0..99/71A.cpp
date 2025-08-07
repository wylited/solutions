#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  std::cin >> n;

  for(int i = 0; i < n; ++i) {
    std::string s;
    std::cin >> s;

    if(s.size() > 10) {
      std::cout << s[0] << s.size() - 2 << s[s.size() - 1] << '\n';
    } else {
      std::cout << s << '\n';
    }
  }

  return 0;
}
