#include <fstream>
#include <iostream>
#include <string>

using namespace std;

const string prefix = "AOC2-15";

int main() {
  ifstream in(prefix + "-in.txt");
  ofstream out(prefix + "-out.txt");

  string line;
  int totalW = 0;
  int totalR = 0;

  while (in >> line) {
    // lxwxh
    // 2*l*w + 2*w*h + 2*h*l
    // + slack ( smallest side )

    int l = stoi(line.substr(0, line.find('x')));
    line = line.substr(line.find('x') + 1);
    int w = stoi(line.substr(0, line.find('x')));
    line = line.substr(line.find('x') + 1);
    int h = stoi(line);

    int slack = min(min(l * w, w * h), h * l);

    totalW += 2 * l * w + 2 * w * h + 2 * h * l + slack;

    // The ribbon required to wrap a present is the shortest distance around its
    // sides, or the smallest perimeter of any one face. Each present also
    // requires a bow made out of ribbon as well; the feet of ribbon required
    // for the perfect bow is equal to the cubic feet of volume of the present.
    // Don't ask how they tie the bow, though; they'll never tell.
    int ribbonBow = l * w * h;
    int ribbon = min(2 * (w + h + l),
                     min(2 * w + 2 * h, min(2 * h + 2 * l, 2 * w + 2 * l)));
    totalR += ribbon + ribbonBow;
  }

  out << totalW << endl; // part a
  out << totalR << endl; // uu

  in.close();
  out.close();

  return 0;
}
