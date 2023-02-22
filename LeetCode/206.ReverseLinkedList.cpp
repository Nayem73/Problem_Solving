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
    ListNode* ok;
    void traverse(ListNode* cur, ListNode* par) {
        if (!cur) {
            ok = par;
            return;
        }
        traverse(cur->next, cur);
        cur->next = par;
    }
public:
    ListNode* reverseList(ListNode* head) {
        traverse(head, NULL);
        return ok;
    }
};