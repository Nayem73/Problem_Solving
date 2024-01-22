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
	string s1 = "who.is?Mores? ok.";
	string s2 = "\\";
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

	cerr<<s2<<endl;
	regex pattern("(Mr|Mr.|Mrs|Mrs.|Ms.|Ms)\\s[A - Z][a-z]+(\\s[A-Z][a-z]+)?");
	// regex pattern("who\\..+");
	// regex pattern("\\S+");
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

/*
difference between these two:
	regex pattern("(Mr|Mr.|Mrs|Mrs.|Ms.|Ms)\\s[A-Z][a-z]+(\\s[A-Z][a-z]+)?");
	regex pattern("(Mr|Mr.|Mrs|Mrs.|Ms.|Ms)\\s[A-Z][a-z]+(\\s[A-Z][a-z]+)\\?");

- in the first regex, I used ? which will do (0 or 1)
- in the second regex, I used \\? which will match a ?




In regular expressions, different characters have different meanings. The `?` character is a special character in regex that makes the preceding token in the regular expression optional. It does not need to be escaped unless you want to match a literal `?` character.

On the other hand, the `.` character is a special character that matches any single character (except newline `'\n'`). If you want to match a literal `.` character, you need to escape it with `\\`.

Similarly, `\s` is a special character sequence that matches any whitespace character. If you want to match a literal `\s`, you would need to escape both the backslash and the `s`.

Here's your regex pattern with explanations:

- `(Mr|Mr.|Mrs|Mrs.|Ms.|Ms)`: This matches any of the titles "Mr", "Mr.", "Mrs", "Mrs.", "Ms", or "Ms". The `.` in "Mr." and "Mrs." is escaped because it's a special character in regex.
- `\\s`: This matches any whitespace character. The `s` is not escaped because it's not a special character when used after a backslash.
- `[A-Z][a-z]+`: This matches an uppercase letter followed by one or more lowercase letters.
- `(\\s[A-Z][a-z]+)?`: This matches a whitespace character followed by an uppercase letter and one or more lowercase letters. The whole group is optional because of the `?` at the end.

I hope this helps! Let me know if you have any other questions. 😊

*/