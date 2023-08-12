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
	int n, k; cin>>n>>k;
	string s; cin>>s;

	vector<int> v(n);
	vector<int> indx(n);
	vector<pair<int, pair<int,char>>> rs(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		indx[v[i]]++;
		rs[i] = {v[i], {i, s[i]}};
	}

	sort(rs.begin(), rs.end());
	rje()<<rji(rs);
	vector<pair<int, pair<int,char>>> cp_rs = rs;
	// for (int i = 0; i < n; i++) {
	// 	int to = (i + 1) % indx[rs[i].first];
	// 	cp_rs[to].second.second = rs[i].second.second;
	// 	rje()<<rji(to) rji(cp_rs);
	// }

	cp_rs[0].second.second = rs[indx[rs[0].first]-1].second.second;
	for (int i = 1; i < n; i++) {
		if (rs[i].first == rs[i-1].first) {
			cp_rs[i].second.second = rs[i-1].second.second;
		} else {
			cp_rs[i].second.second = rs[i+indx[rs[i].first]-1].second.second;
		}
	}

	rje()<<rji(cp_rs);


	for (int i = 0; i < n; i++) {
		s[cp_rs[i].second.first] = cp_rs[i].second.second;
	}

	rje()<<rji(s);

}