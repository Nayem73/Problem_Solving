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
	string a = "Ka-123-123";
	string b = "Kha-12-312";
	string c = "Ga-123-123";
	string d = "Gha-13-123";

	regex pattern("[A-Z]{1}(a|ha)-\\d{2,3}-\\d{3}");
	bool isMatch = regex_match(a, pattern);
	cout << isMatch << endl;
	rje()<<rji(isMatch);
}

/*
here, is both regex same?

regex pattern("[A-Z]{1}(a|ha)-\\d{2,3}-\\d{3}");
regex pattern("[A-Z](a|ha)-\\d{2,3}-\\d{3}");

Yes, both regular expressions are functionally the same.

In regular expressions, `[A-Z]{1}` and `[A-Z]` both match exactly one uppercase letter. The `{1}` in the first pattern is redundant because, by default, a character set or a character class matches exactly one occurrence.

So, both of these regular expressions will match a string that starts with an uppercase letter, followed by either "a" or "ha", a hyphen, two to three digits, another hyphen, and finally three digits.

Here's a breakdown of the regular expression:

- `[A-Z]` or `[A-Z]{1}`: Matches exactly one uppercase letter.
- `(a|ha)`: Matches either "a" or "ha".
- `-`: Matches the hyphen character.
- `\\d{2,3}`: Matches a sequence of 2 to 3 digits.
- `-`: Matches the hyphen character.
- `\\d{3}`: Matches a sequence of 3 digits.

I hope this helps! Let me know if you have any other questions. 😊
*/