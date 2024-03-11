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

vector<string> validParenthesis;

bool isValid(string s) {
	stack<char> stack;
	for (int i = 0; i < (int)s.length(); i++) {
		if (s[i] == '(') stack.push(s[i]);
		else {
			if (stack.top() != '(') return false;
			stack.pop();
		}
	}

	if (stack.empty()) return true;
	return false;
}

void getAllPossibleParenthesis(string s, int n, int opening, int closing) {
    if (opening > n || closing > opening) return;
    if (s.size() == n+n && isValid(s)) {
    	validParenthesis.push_back(s);
    	return;
    }
    getAllPossibleParenthesis(s + "(", n, opening+1, closing);
    getAllPossibleParenthesis(s + ")", n, opening, closing+1);
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
	int n = 3;
	getAllPossibleParenthesis("", n, 0, 0);
	rje()<<rji(validParenthesis);

}