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
        ListNode* got = list1;
        ListNode* ret = list1;
        
        vector<ListNode> ans;
        int cnt = 0;
        while (true) {
           // cout << cnt << ": "<<(list1?list1->val:-1)<<' '<<(list2?list2->val:-1)<<endl;
            if (!list1 && !list2) {
                //ret->next = NULL;
                break;
            }
            ++cnt;
            if (cnt == 8) {
                //ret->next = NULL;
                break;
            }
            
            if (!list2 || (list1 && list1->val <= list2->val)) {

                //if (!got) got = list1, ret = got;
                /*else {
                    got->next = list1;
                    got = got->next;
                }*/
                ans.push_back(*list1);
                cout << list1->val << '~';
                list1 = list1->next;
            }
            
            else if (!list1 || list1->val > list2->val) {
                /*if (!got) got = list2, ret = got;
                else {
                    got->next = list2;
                    got = got->next;
                }*/
                ans.push_back(*list2);
                cout << list2->val << '=';
                
                list2 = list2->next;
            }
            
        }
        
        for (int i = 1; i < (int)ans.size(); i++) {
            //ans[i-1].next = ans[i];
            ListNode par = ans[i-1];
            ListNode cur = ans[i];
            //par.next = cur;
        }
        //ans[n-1].next = NULL;
        //return ans[0];
        ListNode* head = ans[0];
        return head;
    }
};