#include <bits/stdc++.h>

using namespace std;

const string prefix = "6";
int times[4]; // cant be asked to use vectors
int distances[4];
int t, d, c;

int main() {
  ifstream fin("in_" + prefix + ".txt");
  ofstream fout("out_" + prefix + ".txt");

  string line;
  getline(fin, line);
  stringstream ss(line.substr(line.find(":") + 1));
  for (int i = 0; i < 4; i++) {
    ss >> times[i];
  }

  getline(fin, line);
  ss = stringstream(line.substr(line.find(":") + 1));
  for (int i = 0; i < 4; i++) {
    ss >> distances[i];
  }

  int m = 1;

  for(int i = 0; i < 4; i++) {
    t = times[i];
    c = 0;

    while(t--){
      d = t * (times[i]-t);
      if(d > distances[i]){
        c++;
      }
    }
    cout << c << endl;
    if(c != 0){
      m *= c;
    }
  }

  fout << m;

  fin.close();
  fout.close();

  return 0;
}
