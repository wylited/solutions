#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

std::unordered_map<int, int> memo;

int memo_pow2(int val) {
  if (val == 0) {
    return 1;
  }

  if (memo.find(val) != memo.end()) {
    return memo[val];
  }

  int result;
  if (val % 2 == 0) {
    result = 1 + memo_pow2(val / 2);
  } else {
    result = 0;
  }

  memo[val] = result;
  return result;
}

void solve() {
  ll n;
  cin >> n; // 2^n
  ll tot(0);
  int a, c(0);
  multiset<int> vals;

  for (int i = 0; i < n; i++) {
    cin >> a;
    tot += memo_pow2(a);
    a = memo_pow2(i + 1);
    vals.insert(a);
  }

  while (tot < n) {
    if (vals.empty()) {
      cout << -1 << endl;
      return;
    }
    if (tot + *(vals.rbegin()) <= n) {
      tot += *(vals.rbegin());
      c++;
    }
    vals.erase(prev(vals.end()));
  }
  cout << c << endl;
}

int t;

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
}
