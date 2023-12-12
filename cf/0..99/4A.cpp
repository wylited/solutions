#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int w;
  std::cin >> w;
  std::cout << (w % 2 == 0 && w > 2 ? "YES" : "NO") << "\n";

  return 0;
}
