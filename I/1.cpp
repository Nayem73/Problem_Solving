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
	// vector<int> arr{3,5,-4, 8,11,1,-1,6};
	vector<int> arr{2222222,2222222};
	int target = 4444444;

  if (target < 0) {
      target *= -1;
      for (int i = 0; i < (int)arr.size(); i++) {
          arr[i] *= -1;
      }
  }

	// vector<int> pos(100);
	// vector<int> neg(100);
	map<int,int> pos;
	map<int,int> neg;

	for (int x: arr) {
		if (x < 0) neg[-x]++;
		else pos[x]++;
	}

	vector<pair<int,int>> ans;
	for (int x: arr) {
		if (x >= 0) {
			int got = target-x;
			if (got >= 0 && pos[got]) {
				if ((got==x && pos[got]>=2) || (got!=x && pos[x] && pos[got])) {
					ans.push_back({x,got});
					pos[x]--; pos[got]--;
				}

			}
			else if (got < 0 && neg[-got]) {
				if ((got==x && neg[-got]>=2) || (got!=x && pos[x] && neg[-got])) {
					ans.push_back({x, got});
					pos[x]--; neg[-got]--;
				}
			}
		}
		else {
			int got = target+(-x);
			if (pos[got]) ans.push_back({x, got});
		}
	}

	rje()<< rji(ans);
}

// 10-9 = 1 lage
// 10-13 = -3 lage

// x = -9
// x = 13
// 10+9 = 19 lage
// 10+13 = 23 lage
