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

//s.order_of_key(33); *s.find_by_order(0);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int,null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

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
	vector<int> b1{5,1,2,2};
	vector<int> b2{1,4,1,2};
	long long sum1 = accumulate(b1.begin(), b1.end(), 0);
	long long sum2 = accumulate(b2.begin(), b2.end(), 0);
	if ((sum1+sum2)%2L) {
		cerr<< -1 << endl;
	}
	sort(b1.begin(), b1.end());
	sort(b2.begin(), b2.end());

	rje()<<rji(b1);
	rje()<<rji(b2);

	long long need = (sum1+sum2)/2L;
	ordered_set s1, s2;

	int n =b1.size();
	for (int i = 0; i < n; i++) {
		s1.insert(b1[i]);
		s2.insert(b2[i]);
	}

	int indx = 0;
	long long ret = 0;
	while (indx < n) {
		int g1 = *s1.find_by_order(indx);
		int g2 = *s2.find_by_order(indx);
		if (g1 != g2) {
			auto it1 = s1.find_by_order(indx);
			auto it2 = s2.find_by_order(indx);
			s1.erase(it1);
			s2.erase(it2);

			s1.insert(g2);
			s2.insert(g1);
			ret += min(g1, g2);
		}
		else indx++;
	}


	rje()<<rji(s1);
	rje()<<rji(s2);

}

	// 	while (indx < n) {
	// 	// auto it1 = s1.begin();
	// 	// auto it2 = s2.begin();
	// 	cerr<< *it1 <<endl;
	// 	if (*it1 != *it2) {
	// 		s2.insert(*it1);
	// 		s1.insert(*it2);
	// 		s1.erase(it1);
	// 		s2.erase(it2);
	// 	}
	// 	// break;
	// 	else {
	// 		it1++;
	// 		it2++;
	// 	}

	// }
