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
    ListNode* removeElements(ListNode* head, int val) {
        
        while (head != NULL && head->val == val) {
            head = head->next;
        }
        
        ListNode *curNode = head;
        ListNode *prevNode = NULL;
        while (curNode != NULL) {
            if (curNode->val == val) {
                if (curNode->next == NULL) {
                    prevNode->next = NULL;
                    if (curNode->val == 6) {
                        cout << prevNode->val << endl;
                    }
                    curNode = NULL;
                }else {
                    if (curNode->next->val != val) {
                        prevNode->next = curNode->next;
                    }
                    curNode = curNode->next;
                }
            } else {
                prevNode = curNode;
                curNode = curNode->next;
            }
        }
        
        return head;
        
        
    }
};