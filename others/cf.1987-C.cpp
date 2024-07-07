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

int calculate_seconds(vector<int>& heights) {
    int max_height = 0;
    int distinct_plateaus = 0;
    
    for (int i = 0; i < heights.size(); ++i) {
        max_height = max(max_height, heights[i]);
        if (i < heights.size() - 1 && heights[i] > heights[i + 1]) {
            distinct_plateaus++;
        }
    }
    return max_height + distinct_plateaus;
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
		int n; cin >> n;
		vector<int> v(n);
		for (int &X: v) cin >> X;

		int time = 0;
		while (true) {
			++time;
			for (int i = 0; i < n; i++) {
				if (i+1 < n && v[i] > v[i+1]) {
					v[i] = max(0, v[i]-1);
				}
				if (i == n-1) {
					v[i] = max(0, v[i]-1);
				}
			}

			bool allZero = true;
			for (int i = 0; i < n; i++) {
				if (v[i] > 0) allZero = false;
			}
			if (allZero) break;
		}
		cout << time << endl;
	}
}