#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int t, n;
  std::cin >> t;
  while (t--) {
    std::cin >> n;
    if (n % 3 == 0) {
      std::cout << "Second" << std::endl;
    } else {
      std::cout << "First" << std::endl;
    }
  }

  return 0;
}
