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
	vector<int> arr{1,4,5,2,6,3};
	// vector<int> arr{1,3,4,2};
	vector<vector<int>> mat{
		{4,3,5},
		{1,2,6}
	};

	map<int, pair<int,int>> mp;
	for (int i = 0; i < (int)mat.size(); i++) {
		for (int j = 0; j < (int)mat[i].size(); j++) {
			int x = mat[i][j];
			mp[x] = {i, j};
		}
	}

	int r = mat.size();
	int c = mat[0].size();
	map<int, int> rans;
	map<int, int> cans;
	for (int i = 0; i < (int)arr.size(); i++) {
		int x = mp[arr[i]].first;
		int y = mp[arr[i]].second;
		rje()<< i << " "<<rji(x)rji(y);
		rans[x]++;
		cans[y]++;
		rje()<<rji(rans[x]) rji(cans[y]);
		if (rans[x] >= r) {
			rje()<<rji(i);
			// return arr[i];
			return 0;
		}
		else if (cans[y] >= c) {
			rje()<<rji(i);
			// return arr[i];			
			return 0;
		}
	}
}