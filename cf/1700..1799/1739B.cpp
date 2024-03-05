#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define ifor(n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()

int t, n, a;

int solve() {
  cin >> n;
  vector<int> d(n, 0);
  cin >> d[0];

  for (int i = 1; i < n; i++) {
    cin >> a;

    if ((a < d[i - 1]) && a) {
      cout << -1 << endl;
      return 0;
    }
    d[i] = d[i - 1] + a;
  }

  for (int val : d) {
    cout << val << " ";
  }

  cout << endl;
  return 0;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
