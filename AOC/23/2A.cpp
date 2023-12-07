#include <bits/stdc++.h>

using namespace std;

const string prefix = "2";

int main() {
  ifstream fin("in_" + prefix + ".txt");
  ofstream fout("out_" + prefix + ".txt");

  string line, t1, t2;
  int game, tot = 0;
  int count = 0;

  while (getline(fin, line)) {
    line.erase(remove_if(line.begin(), line.end(), [](char c) { return std::ispunct(c); }), line.end());
    istringstream inputStream(line);

    inputStream >> t1 >> t2;
    game = stoi(t2);

    while(inputStream >> t1 >> t2) {
      if(t2 == "green"){
        if(stoi(t1) > 13){
          tot += game;
          break;
        }
      } else if(t2 == "red"){
        if(stoi(t1) > 12) {
          tot += game;
          break;
        }
      } else if(t2 == "blue"){
        if(stoi(t1) > 14) {
          tot += game;
          break;
        }
      }
    }
  }

  fout << 5050 - tot << std::endl;
  fin.close();
  fout.close();

  return 0;
}
