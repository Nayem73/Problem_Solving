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


int gcd(int a, int b) {
	if (a%b==0) return b;
	return gcd(b, a%b);
}

int mod = 1e9 + 7;
long long bigmod(int a, int b) {
	if (b==0) return 1%mod;
	long long x = bigmod(a, b/2);
	x = (x*x) % mod;
	if (b%2) x = (x*a) % mod;
	return x;
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
	
	// 	vector<int> st{7,3,5,3,6,2,9,8}; int n = st.size();
	// vector<int> ans(n);
	// vector<int> tmp;
	// for (int i = 0; i < n; i++) {
	// 	int x = st[i];
	// 	auto it = lower_bound(tmp.begin(), tmp.end(), x);
	// 	if (it == tmp.end()) {
	// 		ans[i] = tmp.size();
	// 		tmp.push_back(x);
	// 	}
	// 	else {
	// 		*it = x;
	// 		ans[i] = distance(tmp.begin(), it);
	// 	}
	// }
 
	// cerr << tmp.size() <<endl;
	// for (int i = 0; i < n; i++) {
	// 	cerr << st[i] << ": "<< ans[i] << endl;
	// }

	priority_queue<int> pq;
	pq.push(56);
	pq.push(1);
	pq.push(23);

	while (!pq.empty()) {
		cout << pq.top() << ' ';
		pq.pop();
	}



	
}