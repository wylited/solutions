#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n;
  cin >> t >> n;
  string s;
  for (int i = 0; i < t; i++) {
    vector<int> a(26, -1);
    cin >> s;
    for (int j = 0; j < n; j++)
      a[s[j] - 'a']++;
    bool f = (bool)a[s[0] - 'a'];
    bool v = 1;
    for (int j = 1; j < n; j++) {
      if (f == (bool)a[s[j] - 'a']) {
        v = 0;
      } else
        f = (bool)a[s[j] - 'a'];
    }
    cout << (v ? 'T' : 'F') << endl;
  }
}
