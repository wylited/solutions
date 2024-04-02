#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string x;
  map<char, char> v{
      {'0', '0'}, {'1', '1'}, {'2', '2'}, {'3', '3'}, {'4', '4'},
      {'5', '4'}, {'6', '3'}, {'7', '2'}, {'8', '1'}, {'9', '0'},
  };
  cin >> x;
  for (long long i = 0; i < x.length(); i++) {
    if (i == 0 && x[i] == '9')
      continue;
    x[i] = v[x[i]];
  }
  cout << x;
}
