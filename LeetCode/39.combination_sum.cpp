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
    vector<int> candidates{2,3,5};
    int target = 8;
    vector<bool> vis(50);
    vis[0] = true;
    int n = candidates.size();
    for (int i = 0; i < n; i++) {
        int x = candidates[i];
        for (int j = x; j <= 50; j += x) {
            vis[j] = true;
        }
    }

    //rje()<<rji(vis);
    // vector<vector<int>> ans;
    set<vector<int>> ans;

    for (int i = 0; i < n; i++) {
      int x = candidates[i];
      if (target-x >= 0 && vis[target-x]) {
        // cerr << x << ' '<< target-x << endl;
                      for (int z : candidates) {
                        if ((target-x) % z == 0) {
                          vector<int> tmp;
                          tmp.push_back(x);
                          for (int q = 0; q < (target-x)/z; q++) {
                            tmp.push_back(z);
                          }
                          rje()<<tmp;
                          sort(tmp.begin(), tmp.end());
                          ans.insert(tmp);
                          // return 0;
                        }
                      }
                      // rje()<<rji()

                      // return 0;
      }
    }
    vector<vector<int>> out;
    for (auto t: ans) {
      out.push_back(t);
    }
    // return ans;
    rje()<< out;
}