#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> s(N);
  for (int i = 0; i < N; i++) {
    cin >> s[i];
  }

  sort(s.begin(), s.end(), greater<int>());
  vector<int> cs = s;
  auto last = unique(cs.begin(), cs.end());
  cs.erase(last, cs.end());

  int score = cs[2];
  int c = count(s.begin(), s.end(), score);

  cout << score << " " << c << endl;

  return 0;
}
