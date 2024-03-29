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

vector<int> ara{4,1,2,0,5};

void merge(int lo, int hi) {
	if (lo == hi) return;
	int mid = (lo+hi)/2;
	merge(lo, mid);
	merge(mid+1, hi);

	vector<int> ara1;
	vector<int> ara2;
	for (int i = lo; i <= mid; i++) ara1.push_back(ara[i]);
	for (int i = mid+1; i <= hi; i++) ara2.push_back(ara[i]);

	int indx1 = 0, indx2 = 0;
	int indx = lo;
	int n1 = ara1.size(), n2 = ara2.size();

	rje()<<rji(indx1) rji(mid) rji(indx2) rji(hi);
	rje()<<rji(ara1) rji(ara2);

	while (indx1 < n1 && indx2 < n2) {
		if (ara1[indx1] <= ara2[indx2]) {
			ara[indx] = ara1[indx1];
			indx1++;
			indx++;
		} else {
			ara[indx] = ara2[indx2];
			indx2++;
			indx++;
		}
		rje()<<rji(ara);
	}

	while (indx1 < n1) {
		ara[indx] = ara1[indx1];
		indx1++;
		indx++;
	}
	while (indx2 < n2) {
		ara[indx] = ara2[indx2];
		indx2++;
		indx++;
	}
	rje()<<rji(ara);
	rje();
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
	
	rje()<<rji(ara);
	int n = ara.size();
	merge(0, n-1);

	rje()<<rji(ara);
}