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

set<vector<int>> st;

void bt (vector<int> tmp, vector<int> &candidates, int target, int sum, int lo) {
	if (sum == target) st.insert(tmp);
	if (sum > target) return;

	for (int i = lo; i < (int)candidates.size(); i++) {
		int X = candidates[i];
		tmp.push_back(X);
		bt(tmp, candidates, target, sum+X, i+1);
		tmp.pop_back();
	}
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
	vector<int> candidates{10,1,2,7,6,1,5}; int n = candidates.size();
	int target = 8;

	sort(candidates.begin(), candidates.end());
	rje()<<rji(candidates);

	bt({}, candidates, target, 0, 0);

	vector<vector<int>> out;
	for (auto X: st) out.push_back(X);
	st.clear();
	return out;
}