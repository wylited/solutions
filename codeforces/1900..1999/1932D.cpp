#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

pair<string, string> find_beating_card(const string &card,
                                       vector<string> &cards,
                                       const char &trump_suit) {
  char card_rank = card[0];
  char card_suit = card[1];

  vector<string> trump_cards;
  vector<string> same_suit_cards;

  for (const string &c : cards) {
    if (c[1] == trump_suit)
      trump_cards.push_back(c);
    else if (c[1] == card_suit)
      same_suit_cards.push_back(c);
  }

  if (!trump_cards.empty()) {
    sort(trump_cards.rbegin(), trump_cards.rend());
    return make_pair(card, trump_cards[0]);
  }

  if (!same_suit_cards.empty()) {
    sort(same_suit_cards.rbegin(), same_suit_cards.rend());
    return make_pair(card, same_suit_cards[0]);
  }

  return make_pair("", "");
}

void reconstruct_rounds(int t) {
  while (t--) {
    int n;
    cin >> n;

    char trump_suit;
    cin >> trump_suit;

    vector<string> cards(2 * n);
    for (int i = 0; i < 2 * n; ++i)
      cin >> cards[i];

    vector<pair<string, string>> discard_pile;
    bool possible = true;

    for (int i = 0; i < n; ++i) {
      string first_player_card = cards[i];
      string second_player_card =
          find_beating_card(first_player_card, cards, trump_suit).second;

      if (second_player_card.empty()) {
        possible = false;
        break;
      }

      discard_pile.push_back(make_pair(first_player_card, second_player_card));
      cards.erase(find(cards.begin(), cards.end(), second_player_card));
    }

    if (possible) {
      for (const auto &pair : discard_pile)
        cout << pair.first << " " << pair.second << endl;
    } else {
      cout << "IMPOSSIBLE" << endl;
    }
  }
}

int main() {
  int t;
  cin >> t;
  reconstruct_rounds(t);
  return 0;
}
