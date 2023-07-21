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
   int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
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
  int t; cin >> t;
  while (t--) {


int n;
cin >> n;

vector<int> s(n);
for (int i = 0; i < n; i++) cin >> s[i];

int max_element = n;
vector<int> mp(max_element + 1, 0);

for (int i = 0; i < n; i++) {
    int x = s[i];
    unordered_set<int> seen;
    for (int j = x; j <= max_element; j += x) {
        if (seen.find(j) == seen.end()) {
            mp[j]++;
            seen.insert(j);
        }
    }
}

int ans = 0;
for (int X: mp) ans = max(ans, X);
cout << ans << endl;












    }
}