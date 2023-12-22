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

long long rec(vector<int> num, int indx) {
	if (indx >= (int)num.size()) return 1;
	vector<int> tmp;
	bool flg = false;
	for (int i = 0; i < (int)num.size(); i++) {
		if (i == indx) {
			tmp.push_back(num[i]-1);
			flg = true;
			continue;
		} else if (flg) {
			tmp.push_back(9);
		} else {
			tmp.push_back(num[i]);
		}
	}
	
	long long curNum = num[indx], curTmp = num[indx]-1;
	for (int i = 0; i < indx; i++) curNum *= num[i], curTmp *= num[i];
	

	long long got1 = rec(num, indx+1)*(num[indx]?num[indx]:1);
	long long got2 = rec(tmp, indx+1)*(tmp[indx]?tmp[indx]:1);
	rje()<<rji(indx) rji(num) rji(tmp) rji(got1) rji(got2) rji(curNum) rji(curTmp);
	return max(got1, got2);
	// return max(rec(num, indx+1)+cur, rec(tmp, indx+1)+cur);
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
	
	int n; cin>>n;
	vector<int> num;
	while (n) {
		num.push_back(n%10);
		n/=10;
	}
	reverse(num.begin(), num.end());
	long long got = rec(num, 0);
	cerr << got;

}