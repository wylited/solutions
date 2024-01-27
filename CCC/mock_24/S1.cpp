#include <bits/stdc++.h>

using namespace std;
int n, k;
string s;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> n >> k >> s;

  bool f = false;

  for (int i = s.length() - 1; i >= 0; i--) {
    if (s[i] == '1') {
      if (f) {
        s[i] = '0';
      } else {
        f = true;
      }
    } else {
      f = false;
    }
  }

  vector<int> dsts;
  int c = 0;

  for (int i = 0; i <= s.length(); i--) {
    if (s[i] - '0') {
      dsts.push_back(c);
      c = 0;
    } else {
      c++;
    }
  }

  for (int i = 0; i < dsts.size(); i++) {
    if (k -= dsts[i] >= 0) {
      continue;
    } else {
      cout << dsts.size() - i + 1;
      return 0;
    }
  }

  cout << 1;

  return 0;
}
