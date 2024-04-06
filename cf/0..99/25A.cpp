#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans(-1), c;
  vector<int> e, o;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> c;
    if (c % 2 == 0)
      e.push_back(i + 1);
    else
      o.push_back(i + 1);
  }

  if (o.size() == 1)
    cout << o[0] << endl;
  else
    cout << e[0] << endl;
}
