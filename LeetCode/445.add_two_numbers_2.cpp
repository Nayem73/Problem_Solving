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
    vector<int> v;
    vector<int> v2;
    
    ListNode* createNode(int value) {
        ListNode* newNode = new ListNode();
        newNode->val = value;
        newNode->next = nullptr;
        return newNode;
    }
    
    void traverse(ListNode* l1, ListNode* l2, int carry) {
        //cout << l1->next->val << endl;
        //return;
        if (!l1 && !l2) return;
        if(l1) v.push_back(l1->val);
        if (l2) v2.push_back(l2->val);
        
        traverse(!l1?l1:l1->next,!l2?l2: l2->next, 1);
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        traverse(l1, l2, 0);
        for (int X: v) cout << X << ' ';
        cout << endl;
        for (int X: v2) cout << X << ' ';
        
        reverse(v.begin(), v.end());
        reverse(v2.begin(), v2.end());
        int n = max(v.size(), v2.size());
        vector<int> out(n);
        int carry = 0;
        for (int i = 0; i < n; i++) {
            int got = (i<v.size()?v[i]:0) + (i<v2.size()?v2[i]:0) + carry;
            carry = 0;
            if (got >= 10) {
                carry = got / 10;
                got = got%10;
            }
            out[i] = got;
        }
        if (carry) out.push_back(carry);
        
        cout << endl << endl;
        reverse(out.begin(), out.end());
        for (int X: out) cout << X << ' ' << endl;
        
        int indx = ((int)out.size()) - 1;
        for (int i = 0; i < (int)out.size(); i++) {
            if (!out[i]) continue;
            else {
                indx = i;
                break;
            }
        }
        
        
        ListNode* head = new ListNode();
        head->val = out[indx];
        if (indx == ((int)out.size()) - 1) return head;
        head->next = new ListNode();
        ListNode* cur = head->next;

        for (int i = indx+1; i < (int)out.size(); i++) {   
                cur->val = out[i];
                
                if (i==((int)out.size()) - 1) break;
                cur->next = new ListNode();
               // cout << "^^ "<< cur->next->val << endl;
                cur = cur->next;
                
                
                //ListNode* newNode = createNode(out[i]);
                //cur->next = 
        }
        //cout << cur->next->val << endl;
        return head;
    }
};