#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <openssl/md5.h>
#include <string>
#include <vector>

using namespace std;

const string prefix = "4";

int main() {
  ifstream fin("in/" + prefix + ".txt");
  ofstream fout("out/" + prefix + ".txt");

  string secret_key;
  fin >> secret_key;
  bool found = false;
  int i = 100000;

  while (!found) {
    string test = secret_key + to_string(i);
    string cmd = "echo -n " + test + " | md5sum";
    system(cmd.c_str());
    // int last =
    //     stoi(secret_key.substr(secret_key.length() - 1,
    //     secret_key.length()));
    // if (md5.substr(0, 6) == "000000") {
    //   found = true;
    //   fout << test << endl;
    // }
    i++;

    if (i == 1000000) {
      found = true;
    }
  }

  fin.close();
  fout.close();

  return 0;
}
