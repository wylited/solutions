#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  long double w;
  cin >> n;
  vector<long long> h(n + 1);
  for (long long i = 0; i <= n; i++)
    cin >> h[i];

  long double ans = 0;

  for (long long i = 0; i < n; i++) {
    cin >> w;
    ans += (h[i] + h[i + 1]) * w / 2;
  }

  string anstring = to_string(ans);

  cout << fixed << setprecision(1) << ans;

  return 0;
}
