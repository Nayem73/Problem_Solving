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

ListNode* rec(ListNode *curNode, int val) {
    if (curNode == NULL) return NULL;
    
    while (curNode != NULL && curNode->val == val) {
        curNode = curNode->next;
    }
    if (curNode == NULL) return NULL;
    cout << curNode->val << endl;
    ListNode *gotNode = rec(curNode->next, val);
    curNode->next = gotNode;
    return curNode;
}
    
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head->val == val) {
            head = head->next;
        }
        rec(head, val);
        return head;
    }
};