//BISMILLAHIR-RAHMANIR-RAHIM//
#include <bits/stdc++.h>
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > rje & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, rje&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct rje {
#ifdef LOCALM
~rje() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define rji(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
#define fast_io {ios_base::sync_with_stdio(0); cin.tie(0);}
#define endl '\n'


 vector<string> binaryTreePaths(TreeNode* root) 
    {
        std::vector<std::vector<TreeNode*>> vv;
        std::queue<std::vector<TreeNode*>> Q;
        Q.push({root});
        while (!Q.empty())
        {
            std::vector<TreeNode*> cur = Q.front();
            Q.pop();
            
            TreeNode* lastNode = cur.back();
            if (!lastNode->left && !lastNode->right)
            {
                vv.push_back(cur);
            }
            else
            {
                if (lastNode->left)
                {
                    std::vector<TreeNode*> curLeft = cur;
                    curLeft.push_back(lastNode->left);
                    Q.push(curLeft);
                }
                if (lastNode->right)
                {
                    std::vector<TreeNode*> curRight = cur;
                    curRight.push_back(lastNode->right);
                    Q.push(curRight);
                }
            }
        }
        
        std::vector<std::string> res;
        for (const std::vector<TreeNode*> v : vv)
        {
            std::string temp;
            for (const TreeNode* n : v)
            {
                temp += std::to_string(n->val);
                temp += "->";
            }
            temp.erase(temp.end() - 2, temp.end());
            res.push_back(temp);
        }
        
        return res;
    }


int main() {
//ALHAMDULILLAHI-RABBIL-ALAMIN//
#ifdef LOCALM
freopen("in1", "r", stdin);
freopen("out1", "w", stdout);
#endif
fast_io;
//-------------------------------  
  //SUBHANALLAH//
//-------------------------------
  
}