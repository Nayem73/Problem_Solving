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
	string s1 = "Mr Karim Mia";
	string s2 = "Mr. Tin";
	string s3 = "Mrs. Rina";
	string s4 = "Ms. Lu";
	string s5 = "Mrkdjkfjdkfj kdjfijfkjf";
	string s6 = "Mr T";
	string s7 = "Mr. t";
	string s8 = "Rina";
	string s9 = "R";
	string s10 = "r";

	string s11 = "CoreyMSchafer@gmail.com";
	string s12 = "Corey.schafer@university.edu";
	string s13 = "Corey-321-schafer@my-work.net";


	regex pattern("(Mr|Mr.|Mrs|Mrs.|Ms.|Ms)\\s[A-Z][a-z]+(\\s[A-Z][a-z]+)?");
	bool isMatch = regex_match(s2, pattern);
	cerr<<isMatch << endl;

	vector<string> store;
	store.push_back(s1);
	store.push_back(s2);
	store.push_back(s3);
	store.push_back(s4);
	store.push_back(s5);
	store.push_back(s6);
	store.push_back(s7);
	store.push_back(s8);
	store.push_back(s9);
	store.push_back(s10);
	store.push_back(s11);
	store.push_back(s12);
	store.push_back(s13);
	for (string s : store) {
		isMatch = regex_match(s, pattern);
		rje()<<rji(s) rji(isMatch);
	}

}