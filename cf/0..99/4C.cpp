#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  unordered_map<string, int> names;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (names.find(s) == names.end()) {
      names[s] = 0;
      cout << "OK" << endl;
      continue;
    }
    names[s]++;
    cout << s << names[s] << endl;
  }
}
