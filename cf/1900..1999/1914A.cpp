#include <bits/stdc++.h>

using namespace std;

int t, n, c;
int fin[26];
string s;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> t;

  while(t--){
    for(int i = 0; i < 26; ++i){
      fin[i] = 0;
    }

    c = 0;

    cin >> n >> s;
    for(char c : s){
      fin[c-'A']++;
    }

    for(int i = 0; i < 26; ++i){
      if(fin[i] > i){
        c++;
      }
    }
    cout << c << endl;
  }

  return 0;
}
