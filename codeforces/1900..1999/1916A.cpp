#include <bits/stdc++.h>

using namespace std;

vector<int> pf(int n){
  vector<int> pf;

  while (n % 2 == 0) {
    pf.push_back(2);
    n /= 2;
  }
  for (int i = 3; i <= sqrt(n); i += 2) {
    while (n % i == 0) {
      pf.push_back(i);
      n /= i;
    }
  }

  if (n > 2) {
    pf.push_back(n);
  }
  return pf;
}

void solve() {
  int n, k, c;
  cin >> n >> k;
  vector<int> b;

  for(int i = 0; i < n; i++) {
    cin >> c;
    b.push_back(c);
  }

  int pa = 2023;

  for (int i = 0; i < n; i++) {
    if (pa % b[i] == 0) {
      pa /= b[i];
    } else {
      cout << "NO\n";
      return;
    }
  }

  if(pa == 2023){
    cout << "YES\n";
    for(int i = 1; i < k; i++) {
      cout << 1 << " ";
    } cout << "2023\n"; return;
  } else if(pa == 289){
    cout << "YES\n";
    for(int i = 1; i < k; i++) {
      cout << 1 << " ";
    } cout << "289\n"; return;
  } else if(pa == 119){
    cout << "YES\n";
    for(int i = 1; i < k; i++) {
      cout << 1 << " ";
    } cout << "119\n"; return;
  }

  auto a = pf(pa);
  if (a.size() <= k) {
    cout << "YES\n";
    for(int i = 0; i < k - a.size(); i++) {
      cout << 1 << " ";
    } for (int i : a){
      cout << i << " ";
    } cout << "\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
