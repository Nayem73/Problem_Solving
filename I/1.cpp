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
        int n; cin >> n;
        vector<int> s(n), p(2e5+7);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            if (s[i] <= 2e5) p[s[i]]++;
        };

        vector<int> mp(300000);
        for (int i = 0; i < n; i++) {
            int x = s[i];
            // for (int j = x; j <= n; j += x) {
            //     mp[j]++;
            // }
            if (x == 1) {
                for (int j = 1; j <= n; j++) mp[j]++;
                continue;
            }

            int upto = n/x;
            int last = upto*x;
            for (int j = last; j >= x; j -= x) {
                if (p[j]) {mp[j]++; break;}

            }
        }

        int ans = 0;
        for (int i = 0; i <= n; i++) {
            ans = max(ans, mp[i]);
        }
        cout << ans << endl;
    }
}