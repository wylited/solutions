#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n;
    string s;
    cin >> n >> s;
    int zeros = count(s.begin(), s.end(), '0');

    for(int i = 0; i < n; ++i) {
      vector<int> output;
      if (i > zeros) {
        output.push_back(-1);
      } else {
        string $ = s;
        reverse($.begin(), $.end());

        int swaps;
        string::iterator a, b;
        a = b = $.begin();

        while(std::all_of($.begin(), $.begin() + i, [](char c) { return c == '0'; })) {
          while(*a == '0'){
            a++;
          } while(b <= a){
            b++;
          } while(*b != 0){
            b++;
          } output.push_back(distance(a, b)+1);
          s.erase(b);
          s.insert(s.begin(), '0');
        }
      }

      for(int val : output) {
        cout << val << " ";
      }
      cout << "\n";
    }
  }

  return 0;
}
