#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* curr = head;
        vector<int> a;
        while (curr != nullptr)
        {
            a.push_back(curr->val);
            curr = curr->next;
        }
        sort(a.begin(), a.end());
        curr = head;
        int i = 0;
        while (curr != nullptr)
        {
            curr->val = a[i];
            i++;
            curr = curr->next;
        }
        return head;
    }
};