#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  std::cin >> n;
  int x[n];

  for(int i = 0; i < n; i++) {
    std::cin >> x[i];
  } std::sort(x, x + n);

  int q;
  std::cin >> q;

  for(int i = 0; i < q; i++){
    int m;
    std::cin >> m;
    std::cout << n - std::distance(std::upper_bound(x, x+n, m), x+n) << std::endl;
  }
  return 0;
}
