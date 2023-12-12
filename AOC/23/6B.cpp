#include <bits/stdc++.h>

using namespace std;

const string prefix = "6";
unsigned long long ttime, ddistance, t, d, c; // just remove the spacing in the input

int main() {
  ifstream fin("in_" + prefix + ".txt");
  ofstream fout("out_" + prefix + ".txt");

  string line;
  getline(fin, line);
  stringstream ss(line.substr(line.find(":") + 1));
  ss >> ttime;

  getline(fin, line);
  ss = stringstream(line.substr(line.find(":") + 1));
  ss >> ddistance;

  t = ttime;
  c = 0;

  while(t--){
    d = t * (ttime-t);
    if(d > ddistance){
      c++;
    }
  }

  fout << c;

  fin.close();
  fout.close();

  return 0;
}
