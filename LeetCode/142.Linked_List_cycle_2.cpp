/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    map<ListNode*, int> mp;
    ListNode* ansNode;
    
    void traverse(ListNode* cur, int curPos) {
        if (!cur) return;
        if (mp.find(cur) != mp.end()) {
           ansNode = cur;
            return;
        }
        mp[cur]++;
        traverse(cur->next, curPos+1);
    }
    
public:
    ListNode *detectCycle(ListNode *head) {
        traverse(head, 0);
        return ansNode;
    }
};