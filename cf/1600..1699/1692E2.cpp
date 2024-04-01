
#include <bits/stdc++.h>

using namespace std;

// incomplete code

void solve() {
  int n, s, tot, c(1), ans(0);
  cin >> n >> s;
  vector<int> a(n, 0);
  deque<int> dist;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i]) {
      tot++;
      dist.push_back(c);
      c = 1;
    } else {
      c++;
    }
  }
  if (tot < s) {
    cout << -1;
  } else {
    while (tot > s) {
      if (dist.front() < dist.back()) {
        ans += dist.front();
        dist.pop_front();
      } else {
        ans += dist.back();
        dist.pop_back();
      }
    }
    cout << ans;
  }
}

int t;
int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
