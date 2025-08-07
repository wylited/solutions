#include <bits/stdc++.h>
using namespace std;

// add-two-numbers

/**
 * Definition for singly-linked list.
 */

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *current = new ListNode();
    ListNode *head = current;
    int carry = 0;
    while (l1 || l2 || carry) {
      int i = carry;

      if (l1 != nullptr) {
        i += l1->val;
        l1 = l1->next;
      }

      if (l2 != nullptr) {
        i += l2->val;
        l2 = l2->next;
      }

      carry = i / 10;
      current->next = new ListNode(i % 10);
      current = current->next;
    }

    return head->next;
  }
};
