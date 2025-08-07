#include <bits/stdc++.h>

using namespace std;

int t, n, i, tmp;

vector<int> sortwi(const std::vector<int>& v) {
    vector<int> r(v.size());
    iota(r.begin(), r.end(), 0);
    sort(r.begin(), r.end(), [&v](int a, int b) { return v[a] > v[b]; });
    r.resize(3);
    return r;
}

void solve(){
  cin >> n;
  vector<int> a, b, c;

  for(i = 0; i < n; i++){
    cin >> tmp;
    a.push_back(tmp);
  }

  for(i = 0; i < n; i++){
    cin >> tmp;
    b.push_back(tmp);
  }

  for(i = 0; i < n; i++){
    cin >> tmp;
    c.push_back(tmp);
  }

  vector<int> am = sortwi(a);
  vector<int> bm = sortwi(b);
  vector<int> cm = sortwi(c);

  tmp = 0;

  for(int ai : am){
    for(int bi : bm){
      for(int ci: cm){
        if(ai == bi || bi == ci || ci == ai){
          continue;
        }
        tmp = max(tmp, a[ai] + b[bi] + c[ci]);
      }
    }
  }

  cout << tmp << endl;
}

int main() {
  cin >> t;

  while(t--){
    solve();
  }
  return 0;
}
