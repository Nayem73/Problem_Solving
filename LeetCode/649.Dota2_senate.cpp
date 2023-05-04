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
	string senate = "DRDRR";
	// string senate = "DDRRR";
	// string senate = "RD";

	int n = senate.size();
	int i = 0;
	queue<char> radiant, dire;
	for (char X: senate) {
		if (X == 'D') dire.push(X);
		else radiant.push(X);
	}

	int D = 0, R = 0;

	while (true) {
		if (senate[i] == 'D') {
			if (D < 0) D++;
			else {
				D++;
				if (!radiant.empty()) {
					radiant.pop(), R--;
					if (radiant.empty()) {rje()<<rji("dire"); return 0;}
				}
				else {
					rje()<<rji("dire");
					return 0;
				}
			}
		} 
		else {
			if (R < 0) R++;
			else {
				R++;
				if (!dire.empty()) {
					dire.pop(), D--;
					if (dire.empty()) {rje()<<rji("radiant"); return 0;}
				}
				else {
					rje()<<rji(i)rji(dire.size())rji(radiant.size())rji("radiant");
					return 0;
				}
			}
		}
		rje()<<rji(i)rji(D)rji(R)rji(dire.size())rji(radiant.size());
		i = (i+1)%n; // if (i==n) i = 0;

	}

	rje()<<rji(dire.size()) rji(radiant.size());
	rje()<<rji(D)rji(R);

}