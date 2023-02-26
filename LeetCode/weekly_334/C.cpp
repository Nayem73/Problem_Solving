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
  vector<int> nums{42,83,48,10,24,55,9,100,10,17,17,99,51,32,16,98,99,31,28,68,71,14,64,29,15,40};
  sort(nums.begin(), nums.end());
  // nums.resize(unique(nums.begin(), nums.end()));
  multiset<int> st;
  for (int X: nums) {
    st.insert(X);
  }
  // nums.clear();
  // for (int X: st) nums.push_back(X);
  rje()<<rji(nums);
map<int,int> mp;
  int ans = 0;
  // for (int i = 0; i < (int)nums.size(); i++) {
  for (int i = 12; i >= 0; i--) {
    if (mp.find(nums[i]) != mp.end()) continue;
    auto it = st.lower_bound(nums[i]*2);
    if (it != st.end()) {
      cerr << *it << ' ';
      int tmp = *it;
      st.erase(it);

      it = st.lower_bound(tmp);
      if (*it != tmp) mp[tmp]++;
      st.erase(st.lower_bound(nums[i]));
      rje()<<rji(nums[i])rji(st);
      ans += 2;
    }
    
  }
  // cerr << ans << end;
  rje()<<rji(ans);
}

// 2 3 4 5
// 2 4 5 9

// 2 4
// 4 9