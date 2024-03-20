#include <bits/stdc++.h>

using namespace std;

string s, t;

int main() {
  cin >> s;
  t = "WUB";
  auto pos = s.find(t);
  while (pos != string::npos) {
    s.replace(pos, t.length(), " ");
    pos = s.find(t, pos + 1);
  }
  istringstream ss(s);

  while (ss >> t) {
    std::cout << t << " ";
  }
  return 0;
}
