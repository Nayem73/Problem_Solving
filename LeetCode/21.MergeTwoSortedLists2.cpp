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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode* curNode1 = head1;
        ListNode* curNode2 = head2;
        if (head1 == NULL) {
            return head2;
        } else if (head2 == NULL) {
            return head1;
        }
        
        ListNode* prevNode = NULL;
        ListNode* head = NULL;
        
        if (head1->val <= head2->val) {
            prevNode = head1;
            head = prevNode;
            curNode1 = curNode1->next;
        } else {
            prevNode = head2;
            head = prevNode;
            curNode2 = curNode2->next;
        }
        
        while (curNode1 != NULL && curNode2 != NULL) {
            /*cout << curNode1->val << ' '<< curNode2->val << endl;
            ListNode* tmpNode = head;
            while (tmpNode != NULL) {
                cout << tmpNode->val << ' ';
                tmpNode = tmpNode->next;
            }
            cout << endl;
            */
            
            if (curNode2->val <= curNode1->val) {
                prevNode->next = curNode2;
                prevNode = prevNode->next;
                ListNode* curNode2Next = curNode2->next;
                prevNode->next = curNode1;
                curNode2 = curNode2Next;
            } else {
                ListNode* curNode1Next = curNode1->next;
                prevNode->next = curNode1;
                prevNode = prevNode->next;
                curNode1 = curNode1Next;
            }
        }
        
        while (curNode2 != NULL) {
            ListNode* curNode2Next = curNode2->next;
            prevNode->next = curNode2;
            prevNode = prevNode->next;
            curNode2 = curNode2Next;
        }
        while (curNode1 != NULL) {
            ListNode* curNode1Next = curNode1->next;
            prevNode->next = curNode1;
            prevNode = prevNode->next;
            curNode1 = curNode1Next;
        }
        
        return head;
    }
};