#include <bits/stdc++.h>

using namespace std;


int t, n;

void solve() {
    cin >> n;
    vector<pair<int, int>> people(n);

    for (int i = 0; i < n; i++) {
        cin >> people[i].first >> people[i].second;
    }

    // Sort the pairs based on the starting positions
    sort(people.begin(), people.end());

}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
