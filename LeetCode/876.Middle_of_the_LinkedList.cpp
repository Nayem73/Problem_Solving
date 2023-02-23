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
    int cnt = 0;
    void traverse(ListNode* cur) {
        if (!cur) return;
        ++cnt;
        traverse(cur->next);
    }
public:
    ListNode* middleNode(ListNode* head) {
        traverse(head);
        
   
        cnt = cnt/2 + 1;
        while (head) {
            cnt--;
            if (cnt == 0) return head;
            head = head->next;
        }
        return NULL;
    }
};