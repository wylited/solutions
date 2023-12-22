#include <bits/stdc++.h>

using namespace std;

const string prefix = "7";

struct hand {
  string cards;
  int power;
  int bid;

  hand(string cards, int power, int bid) {
    this->cards = cards;
    this->power = power;
    this->bid = bid;
  }
};

bool compareHands(hand a, hand b) {
  int abig, bbig;

  for(int i = 0; i < 5; i++){
    if(a.cards[i] == b.cards[i] && i < 4){
      continue;
    }
    char ca = a.cards[i];
    char cb = b.cards[i];
    if('1' <= ca && ca <= '9'){
      abig = ca - '0';
    } else {
      switch(ca){}
    }
  }

  if('1' <= a.cards[0] && a.cards[0] <= '9'){
    abig = a.cards[0] - '0';
  } else {
    if(a.cards[0] == 'T'){
      abig = 10;
    } else if(a.cards[0] == 'J'){
      abig = 11;
    } else if(a.cards[0] == 'Q'){
      abig = 12;
    } else if(a.cards[0] == 'K'){
      abig = 13;
    } else if(a.cards[0] == 'A'){
      abig = 14;
    }
  }

  if('1' <= b.cards[0] && b.cards[0] <= '9'){
    bbig = b.cards[0] - '0';
  } else {
    if(b.cards[0] == 'T'){
      bbig = 10;
    } else if(b.cards[0] == 'J'){
      bbig = 11;
    } else if(b.cards[0] == 'Q'){
      bbig = 12;
    } else if(b.cards[0] == 'K'){
      bbig = 13;
    } else if(b.cards[0] == 'A'){
      bbig = 14;
    }
  }

  if (a.power == b.power) {
    return abig < bbig;
  } else {
    return a.power < b.power;
  }

}

vector<hand> hands;
string cards, temp;
int power, bid, t, tot;

int main() {
  ifstream fin("in_" + prefix + ".txt");
  ofstream fout("out_" + prefix + ".txt");

  string line;

  while (getline(fin, line)) {
    temp = "";
    power = 0;
    stringstream ss(line);
    ss >> cards >> bid;

    for(char card : cards){
      t = 0;
      for(char c : cards){
        if(c == card){
          t += 1;
        }
      }
      power = max(power, t);
    }

    hands.push_back(hand(cards, power, bid));
  }

  sort(hands.begin(), hands.end(), compareHands);
  t = 0;

  while(t < hands.size()){
    cout << hands[t].cards << " " << endl;
    tot += hands[t].bid * (t + 1);
    t++;
  }

  fout << tot;

  fin.close();
  fout.close();

  return 0;
}
