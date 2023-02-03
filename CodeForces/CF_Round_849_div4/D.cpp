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

  int t; cin >> t; while (t--) {
    int n; cin >>n;
    string s; cin >> s;
    vector<int> pref(n); pref[0] = 1;
    vector<int> suff(n); suff[n-1] = 1;
    vector<int> tmp(130);
    vector<int> tmp2(130);
    tmp[s[0]]++;
    tmp2[s[n-1]]++;
    for (int i = 1; i < n; i++) {
      if (!tmp[s[i]]) pref[i] = pref[i-1] + 1;
      else {
        pref[i] = pref[i-1];
        continue;
      }
      tmp[s[i]]++;
    }


    for (int i = n-2; i >= 0; i--) {
      if (!tmp2[s[i]]) suff[i] = suff[i+1] + 1;
      else {
        suff[i] = suff[i+1];
        continue;
      }
      tmp2[s[i]]++;
    }

    rje()<<rji(pref);
    rje()<<rji(suff);

    int ans = 0;
    for (int i = 1; i < n; i++) {
      ans = max(ans, pref[i-1] + suff[i]);
    }
    cout << ans << endl;
  }
}