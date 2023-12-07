#include <bits/stdc++.h>

using namespace std;

const string prefix = "2";

int tot, count, red, blue, green, game, powers;

int main() {
  ifstream fin("in_" + prefix + ".txt");
  ofstream fout("out_" + prefix + ".txt");

  string line, t1, t2;

  while (getline(fin, line)) {
    line.erase(remove_if(line.begin(), line.end(), [](char c) { return std::ispunct(c); }), line.end());
    istringstream inputStream(line);

    red = blue = green = 0;

    inputStream >> t1 >> t2;
    game = stoi(t2);

    while(inputStream >> t1 >> t2) {
      if(t2 == "green"){
        green = max(stoi(t1), green);
      } else if(t2 == "red"){
        red = max(stoi(t1), red);
      } else if(t2 == "blue"){
        blue = max(stoi(t1), blue);
      }
    }

    powers += green * red * blue;
  }

  fout << powers << std::endl;
  fin.close();
  fout.close();

  return 0;
}
