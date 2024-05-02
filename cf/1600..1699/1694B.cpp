#include <bits/stdc++.h>
using namespace std;

long long n, t;
string s;

void solve() {
  cin >> n >> s;
  long long ans = n;
  for (int i = 1; i < n; i++)
    if (s[i] != s[i - 1])
      ans += i;
  cout << ans << endl;
}

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
