#include <bits/stdc++.h>

using namespace std;

int x, y, g, i, c;
array<string, 3> a; // temporary string storage
string b;
vector<array<string, 3>> together, alone;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  a[2] = "0";

  cin >> x;
  for(i = 0; i < x; ++i){
    cin >> a[0] >> a[1];
    together.push_back(a);
  }

  cin >> y;
  for(i = 0; i < y; ++i){
    cin >> a[0] >> a[1];
    alone.push_back(a);
  }

  cin >> g;
  for(i = 0; i < g; ++i){ // change these with for loops
    getline(cin, a[0]);
    for(array<string, 3> pair : together){
      if((a[0].find(pair[0]) != string::npos) ^ (a[0].find(pair[1]) != string::npos)){
        cout << "VIO" << endl;
        pair[2] = "1"; // superficial
      }
    }
    for(array<string, 3> pair : alone){ // change these with for loops
      if((a[0].find(pair[0]) != string::npos) && (a[0].find(pair[1]) != string::npos)){
        cout << "VIO" << endl;
        pair[2] = "1"; // superficial
      }
    }
  }

  for(array<string, 3> pair : together){
    cout << pair[2] << endl;
    c += stoi(pair[2]);
  }

  for(array<string, 3> pair : alone){
    cout << pair[2] << endl;
    c += stoi(pair[2]);
  }

  cout << c << endl;
  return 0;
}
