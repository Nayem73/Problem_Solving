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

int subsetPairNotDivisibleByK(vector<int> arr, int N, int K) {
    vector<int> f(K);

    // Compute the frequency of remainders
    for (int i = 0; i < N; i++) {
        f[arr[i] % K]++;
    }

    // Handle special cases for remainder 0 and K/2
    if (K % 2 == 0) {
        f[K/2] = min(f[K/2], 1);
    }

    int res = min(f[0], 1);
    for (int i = 1; i <= K/2; i++) {
        res += max(f[i], f[K-i]);
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
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int N = arr.size();
    int target = 4;

    cerr << subsetPairNotDivisibleByK(arr, N, target) << endl;
}