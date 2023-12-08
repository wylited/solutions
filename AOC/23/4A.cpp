#include <bits/stdc++.h>

using namespace std;

const string prefix = "4";

vector<int> win, mine;
string token;
bool f;
int x, c;

int main() {
  ifstream fin("in_" + prefix + ".txt");
  ofstream fout("out_" + prefix + ".txt");

  string line;

  while (getline(fin, line)) {
    c = 0;
    f = false;

    if(line.find(":") != string::npos) {
      win = mine = vector<int>();
      stringstream ss(line.substr(line.find(":") + 1));

      while(ss >> token){
        if(token == "|"){
          f = true;
        } else if (f) {
          mine.push_back(stoi(token));
        } else {
          win.push_back(stoi(token));
        }
      }

      for (int num : mine){
        if (find(win.begin(), win.end(), num) != win.end()){
          if(c == 0) {
            c = 1;
          } else {
            c *= 2 ;
          }
        }
      }
      x += c;
    }
  }

  fout << x << std::endl;

  fin.close();
  fout.close();

  return 0;
}
