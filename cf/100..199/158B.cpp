#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define ifor(n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()

int n, t;

int main() {
  cin >> n;
  vector<int> s = {0, 0, 0, 0};

  ifor(n) {
    cin >> t;
    s[t - 1]++;
  }

  int ans = s[3] + s[2];

  if (s[2] >= s[0]) {
    ans += (s[1] / 2) + (s[1] % 2);
  } else if (s[0] > s[2]) {
    s[0] -= s[2];
    if (s[1] % 2) {
      ans += (s[1] / 2) + 1;
      s[0] = s[0] >= 2 ? s[0] - 2 : 0;
      ans += s[0] / 4 + ((s[0] % 4 == 0) ? 0 : 1);
    } else {
      ans += s[1] / 2;
      ans += s[0] / 4 + ((s[0] % 4 == 0) ? 0 : 1);
    }
  }
  cout << ans;
}
