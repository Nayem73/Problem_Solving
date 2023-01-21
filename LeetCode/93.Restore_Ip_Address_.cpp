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

bool chk(vector<string> &s1, int s_size) {
	int n = s1.size();
	int cur_size = 0;
	for (int i = 1; i < n; i++) {
		cur_size += s1[i].size();
		if (s1[i].size() > 1 && s1[i][0] == '0') return false;
		stringstream ss(s1[i]);
		long long num;
		while (ss >> num)
		if (num > 255 || num < 0) return false;
	}
	if (cur_size != s_size) return false;
	return true;
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
	// string s = "25525511135";
	string s = "1231231231234";

	int n = s.size();
	vector<string> out;
	for (int i = 0; i < n; i++) {
			vector<string> s1(5);
			s1[1] = s.substr(0, i+1);
		for (int j = i+1; j < n; j++) {
				s1[2] = s.substr(i+1, j-i);
				// cerr<<j<<" "<<s2; return 0;
			for (int k = j+1; k < n; k++) {
					s1[3] = s.substr(j+1, k-j);
				for (int l = k+1; l < n; l++) {
						s1[4] = s.substr(k+1, l-k);
						// rje()<<rji(s1[1])<<rji(s1[2])<<rji(s1[3])<<rji(s1[4]);

						if (chk(s1, n)) {
							int indx = 0;
							string tmp;
							for (int ii = 1; ii < 5; ii++) {
								string X = s1[ii];
								tmp += X;
								tmp += ".";
							}
							tmp.pop_back();
							out.push_back(tmp);
							rje()<<rji(out);
						}

				}
			}
		}
	}

}