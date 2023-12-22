#include <bits/stdc++.h>

using namespace std;

int t, n, i;
int b[3];

int main() {
  cin >> t;

  while(t--){
    cin >> n;

    array<int, 3> days[n];

    for(i = 0; i < n; ++i){
      cin >> days[i][0];
    }

    for(i = 0; i < n; ++i){
      cin >> days[i][1];
    }

    for(i = 0; i < n; ++i){
      cin >> days[i][2];
    }

    for(auto day : days){
      int maxTot = max(max(day[0], day[1]), day[2]);
      int maxInd = -1;
      for(int i = 0; i < 3; i++){
        if(day[i] >= maxTot){
          maxInd = i;
        }
      }

      if(b[maxInd] < maxTot){
        b[maxInd] = maxTot;
      }
    }

    cout << b[0] + b[1] + b[2] << endl;
  }

  return 0;
}
