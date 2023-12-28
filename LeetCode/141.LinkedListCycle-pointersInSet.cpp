/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> st;
        
        ListNode *curNode = head;
        while (curNode != NULL) {
            if (st.find(curNode) != st.end()) {
                return true;
            }
            st.insert(curNode);
            curNode = curNode->next;
        }
        return false;
    }
};
