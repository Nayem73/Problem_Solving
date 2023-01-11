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
	vector<int> fruits{3,3,3,1,2,1,1,2,3,3,4}; int n =  fruits.size();
	map<int,int> mp;
	int ans = 0;
	// if (mp.find(3) != mp.end()) cerr << "ase"<<endl;

	int lo = 0; int cnt = 2;
	for (int hi = 0; hi < n; hi++) {
		if (mp.find(fruits[hi]) != mp.end()) {
			mp[fruits[hi]] = hi;
			ans = max(ans, hi-lo+1);
		}
		else if (mp.size() < 2) {
			mp[fruits[hi]] = hi;
			ans = max(ans, hi-lo+1);
		}
		else {

			while (lo < hi) {
				if (mp[fruits[lo]] == lo) {
					mp.erase(mp[fruits[lo]]);
					lo++; break;
				}
				lo++;
			}

			mp[fruits[hi]] = hi;
			ans = max(ans, hi-lo+1);

		}
	}

	cerr<< ans << endl;
}