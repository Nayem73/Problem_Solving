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
	int t; cin >> t;
	vector<pair<pair<string,string>,pair<string,string>>> v;
	for (int j = 0; j < t; j++) {
		string s1,s2,s3,s4;
		cin>>s1>>s2>>s3>>s4;
		string tmp;
		for (int i = 6; i <= 9; i++) tmp += s1[i];
		tmp += '/';
		tmp += s1[3];
		tmp += s1[4];
		tmp += '/';
		tmp += s1[0];
		tmp += s1[1];
		// rje()<<rji(tmp);
		// v.push_back({{s1}, {s2}}, {{s3},{s4})
		v.push_back({{s1,s2  }, {s3,s4} });
	}

	sort(v.rbegin(), v.rend());
	map<string, int> vis;
	map<string, int> blood;
	map<string, int> year;
	blood["A+"] = 0;
	blood["A-"] = 0;
	blood["AB+"] = 0;
	blood["AB-"] = 0;
	blood["B+"] = 0;
	blood["B-"] = 0;
	blood["O+"] = 0;
	blood["O-"] = 0;

	for (auto X: v) {
		rje()<<rji(X);
		string mail = X.first.second;
		if (vis.find(mail) == vis.end()) {
			vis[mail]++;
			blood[X.second.second]++;
			string lst = X.second.first;
			string lst2;
			for (int i = 6; i <= 9; i++) lst2 += lst[i];
			year[lst2]++;
		}
	}

	for (auto X: blood) {
		cout << X.first << ' '<< X.second << endl;
	}

	for (auto X: year) {
		cout << X.first << ' '<< X.second << endl;
	}
}

