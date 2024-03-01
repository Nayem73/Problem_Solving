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
	//IPv4
	string s1 = "192.168.1.1";
	string s2 = "192.168.1.0";

	string s3 = "192.168.01.1";
	string s4 = "192.168.1.00";
	string s5 = "192.168@1.1";

	//IPv6
	string s6 = "2001:0db8:85a3:0000:0000:8a2e:0370:7334";
	string s7 = "2001:db8:85a3:0:0:8A2E:0370:7334";

	string s8 = "2001:0db8:85a3::8A2E:037j:7334";
	string s9 = "02001:0db8:85a3:0000:0000:8a2e:0370:7334";
	

	regex pattern("([1-9][0-9]?|1[0-9]{2}|2[0-4][0-9]|25[0-5]|0)\\.([1-9][0-9]?|1[0-9]{2}|2[0-4][0-9]|25[0-5]|0)\\.([1-9][0-9]?|1[0-9]{2}|2[0-4][0-9]|25[0-5]|0)\\.([1-9][0-9]?|1[0-9]{2}|2[0-4][0-9]|25[0-5]|0)");
	
	vector<string> store{s1,s2,s3,s4,s5};
	for (int i = 0; i < (int)store.size(); i++) {
		bool isMatch = regex_match(store[i], pattern);
		cerr << store[i] << " ----- "<< isMatch<< endl;
	}


	cerr << "\nNow IPv6 checking\n\n";

	regex patternIPv6("[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}");
	vector<string> store2{s6,s7,s8,s9};
	for (int i = 0; i < (int)store2.size(); i++) {
		bool isMatch = regex_match(store2[i], patternIPv6);
		cerr << store2[i] << " ----- "<< isMatch<< endl;
	}

}