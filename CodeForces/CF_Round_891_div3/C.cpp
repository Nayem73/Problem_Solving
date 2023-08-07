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

void main_fnc() {
  int n; cin >> n;
  int k = (n*(n-1))/2;
  vector<int> v(k);
  map<int,int> mp;
  for (int &X: v) {cin >> X; mp[X]++;};
  sort(v.begin(), v.end());
  // rje()<<rji(v);
    
  vector<int> ans;
  for (auto X: mp) ans.push_back(X.first);
  rje()<<rji(mp);
  
  // ans.resize(n);
  rje()<<ans;
  auto it = mp.begin();
  int rem = 0;
  int done = 0;
  for (int i = 0; i < n; i++) {
    int lft = n - (i+1);
    if (!done) done = it->second;
    cerr<<i << ' '<<done << endl;
    if (done <= lft) {
      it++;
      if (it== mp.end()) break;
      //rem =0;
      done = 0;
    } else {
      //rem += lft;
      ans.push_back(it->first);
      done -= lft;
    }
  }

  while ((int)ans.size() < n) {
    ans.push_back(1e9);
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << ' ';
  }
  cout << endl;
  
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
  int t; cin >> t; while (t--) {
    main_fnc();
  }
}