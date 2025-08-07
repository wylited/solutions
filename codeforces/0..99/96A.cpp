#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int c[2];
  c[0] = s[0] - '0';
  c[1] = 1;
  for (int i = 1; i < s.length(); i++) {
    if (s[i] - '0' != c[0]) {
      c[0] = s[i] - '0';
      c[1] = 1;
    } else {
      c[1]++;
    }
    if (c[1] >= 7) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
