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
    ListNode* reverseList(ListNode* head) {
        ListNode *curNode = head;
        ListNode *prevNode = NULL;
        
        while (curNode != NULL) {
            if (curNode->next == NULL) head = curNode; 
            ListNode *nxtNode = curNode->next;
            curNode->next = prevNode;
            prevNode = curNode;
            curNode = nxtNode;
        }
        
        return head;
    }
};