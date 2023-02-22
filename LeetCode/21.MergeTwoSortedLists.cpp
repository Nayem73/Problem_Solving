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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* got = new ListNode;
        got = NULL;
        ListNode* ret = got;
        
        while (true) {
            if (!list1 && !list2) {
                break;
            }

            if (!list2 || (list1 && list1->val <= list2->val)) {

                if (!got) got = list1, ret = got;
                else {
                    got->next = list1;
                    got = got->next;
                }
                cout << list1->val << '~';
                list1 = list1->next;
            }
            
            else if (!list1 || list1->val > list2->val) {
                if (!got) got = list2, ret = got;
                else {
                    got->next = list2;
                    got = got->next;
                }
                cout << list2->val << '=';
                
                list2 = list2->next;
            }
            
        }
        
        return ret;
    }
};