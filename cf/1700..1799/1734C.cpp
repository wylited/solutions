#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll k, t;

string subroutine(int i, int n, string s) {
  vector<int> q;
  for (int j = i * 2; j <= n; j += i) {
    if (s[j] == '0') {
      k += (i);
      s[j - 1] = '1';
      q.push_back(j);
    } else {
      break;
    }
  }
  for (int j : q) {
    s = subroutine(j, n, s);
  }
  return s;
}

void solve() {
  ll n;
  string s;
  cin >> n >> s;
  k = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0') {
      k += (i + 1);
      s[i] = '1';
      s = subroutine(i + 1, n, s);
    }
  }
  cout << k << endl;
}

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
