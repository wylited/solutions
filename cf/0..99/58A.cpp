#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  auto pos = s.find('h');
  if (pos != string::npos) {
    pos = s.find('e', pos + 1);
    if (pos != string::npos) {
      pos = s.find('l', pos + 1);
      if (pos != string::npos) {
        pos = s.find('l', pos + 1);
        if (pos != string::npos) {
          pos = s.find('o', pos + 1);
          if (pos != string::npos) {
            cout << "YES";
            return 0;
          }
        }
      }
    }
  }
  cout << "NO";
  return 0;
}
