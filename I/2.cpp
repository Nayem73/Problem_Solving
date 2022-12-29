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
  vector<int> nums {7,6,4,-1,1,2};
  int target = 16; int n = nums.size();

  vector<pair<int,int>> store[55555];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) { //all index/numbers before i
      store[nums[j] + nums[i]].push_back({nums[j], nums[i]});
    }


    for (int k = i+2; k < n; k++) {
      int need = target - (nums[i+1]+nums[k]);
      if (need >= 0 && store[need].size()) {
        rje()<<rji(store[need]) << " X " << nums[i+1] <<" "<<nums[k]; 
                                      //store[need] e jotogulo pair thakbe prottek er shathe
                                            //nums[i+1], nums[k] hobe ekekta answer.
      }
    }
  }

  // rje()<<rji(store[3]);
  
}