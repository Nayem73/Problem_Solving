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

long long fnc(string& num, int st, int n) {
    long long p = 1;
    for (int i = st; i < st + n; ++i) {
        p *= (num[i] - '0');
    }
    return p;
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
    int tc2 = 0;
    for (int tc = 1; tc <= t; tc++) {
        int n, k;
        string num;

        cin >> n >> k;
        cin >> num;

        long long maxP = 0;
        long long minP = LLONG_MAX;

        for (int i = 0; i <= k - n; ++i) {
            long long p = fnc(num, i, n);

            if (p != 0) {
                maxP = max(maxP, p);
                minP = min(minP, p);
            }
        }

        if (maxP <= 0) maxP = 1;
        if (minP == LLONG_MAX || minP <= 0) minP = 1;

        if (tc == t) {
            cout << "Case "<< ++tc2 <<":" << endl;
            cout << maxP << endl << minP;
        } else {
          cout << "Case "<< ++tc2 <<":" << endl;
          cout << maxP << endl << minP << endl << endl;
        }
    }
}