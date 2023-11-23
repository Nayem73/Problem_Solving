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

vector<int> ara(6);

void merge(int st, int ed) {
	if (st == ed) return;

	int mid = (st + ed) /2;
	int cursz = (ed-st + 1);

	cerr << st << ' '<< ed << endl;

	merge(st, mid);
	merge(mid+1, ed);

	vector<int> ara1(mid + 1), ara2(ed - mid);

	rje()<<rji(ara) rji(st)rji(mid) rji(ed);
	rje()<<rji(st) rji(mid);
	for (int i = st, j = 0; i <= mid; i++, j++) ara1[j] = ara[i];
	rje()<<rji(ara1);
	
	rje()<<rji(mid+1) rji(ed);
	for (int i = mid+1, j = 0; i <= ed; i++, j++) ara2[j] = ara[i];
	rje()<<rji(ara2);

	int sz1 = mid - st + 1;
	int sz2 = ed - mid;

	int cur1 = 0, cur2 = 0;
	int cur = st;
	while (cur1 < sz1 && cur2 < sz2) {
		if (ara1[cur1] <= ara2[cur2]) {
			ara[cur] = ara1[cur1];
			cur1++;
			cur++;
		} else {
			ara[cur] = ara2[cur2];
			cur2++;
			cur++;
		}
	}

	if (cur1 < sz1) {
		while (cur1 < sz1) {
			ara[cur] = ara1[cur1];
			cur1++;
			cur++;	
		}
	} else if (cur2 < sz2) {
		while (cur2 < sz2) {
			ara[cur] = ara2[cur2];
			cur2++;
			cur++;
		}
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
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> ara[i];

	merge(0, n-1);

	for (int i = 0; i < n; i++) cout << ara[i] << ' ';
}