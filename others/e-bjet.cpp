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
    
    int t, tc = 0;
    cin >> t;
    
    while (t--) {
        int n, tmp;
        cin >> n;
        vector<int> grid[200];
        int dp[200][200]; for (int i = 0; i < 200; i++) for (int j = 0; j < 200; j++) dp[i][j] = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cin >> tmp;
                grid[i].push_back(tmp);
            }
        }

        int qq = n-1;
        for (int i = n; i < 2*n -1; i++) {
            for (int j = 0; j < qq; j++) {
                cin >> tmp;
                grid[i].push_back(tmp);
            }
            qq--;
        }
        dp[0][0] = grid[0][0];

        for (int i = 1; i < 2*n - 1; i++) {
            for (int j = 0; j < (int)grid[i].size(); j++) {
                if (i < n) {
                    dp[i][j] = max(dp[i-1][j] + grid[i][j] , j-1 >= 0 ? dp[i-1][j-1] + grid[i][j] : 0);
                } else {
                    dp[i][j] = max(dp[i-1][j] + grid[i][j] , j+1 < n ? dp[i-1][j+1] + grid[i][j] : 0);
                }

            }
        }

        cout << "Case "<< ++tc <<": ";
        cout << dp[2*n-2][0] << endl;

    }
}
