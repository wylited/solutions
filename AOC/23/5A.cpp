#include <bits/stdc++.h>

using namespace std;

const string prefix = "5";
ifstream fin("in_" + prefix + ".txt");
ofstream fout("out_" + prefix + ".txt");

struct mapping {
  long dst;
  long src;
  long range;

  bool inRange(long val) {
    return val >= src && val <= src + range;
  }

  long getDst(long val) {
    return dst - src + val;
  }

  // blank constructor
  mapping() {
    dst = 0;
    src = 0;
    range = 0;
  }
};

string line, token;
vector<long> seeds = vector<long>();
vector<vector<mapping>> almanac(7);
long minloc = LONG_MAX;

int main() {
  getline(fin, line);
  stringstream ss(line.substr(line.find(":") + 1));

  while (ss >> token) {
    seeds.push_back(stol(token));
  }

  for(int i = -1; i < 7; ++i){
    while(getline(fin, line)){
      if(line == "") continue;
      if(line.find(":") != string::npos) break;

      stringstream ss(line);
      mapping m;

      ss >> m.dst >> m.src >> m.range;
      almanac[i].push_back(m);
    }
  }

  for(long curr : seeds){
    for(vector<mapping> vm : almanac){
      for(mapping mp : vm){
        if(mp.inRange(curr)){
          curr = mp.getDst(curr);
          break;
        }
      }
    }


    minloc = min(minloc, curr);
  }

  fout << minloc;

  fin.close();
  fout.close();

  return 0;
}
