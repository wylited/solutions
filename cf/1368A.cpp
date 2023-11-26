#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int t, a, b, n, ans;
  scanf("%d", &t);

  while(t--) {
    scanf("%d %d %d", &a, &b, &n);
    ans = 0;

    while(a <= n && b <= n) {
      if(a < b) {
        a += b;
      } else {
        b += a;
      }
      ans++;
    }

    printf("%d\n", ans);
  }

  return 0;
}
