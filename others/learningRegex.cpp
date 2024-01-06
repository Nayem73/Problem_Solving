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
	string a = "321-555-4321";
	string b = "321-555.4321";
	string c = "39.3";
	string d = "321.555.4321";

	regex pattern("\\d\\d\\d[.]\\d\\d\\d[.]\\d\\d\\d\\d");
	bool isMatch = regex_match(a, pattern);
	cout << isMatch << endl;
	rje()<<rji(isMatch);
}

/* in java

package com.nayemtech;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
    public static void main(String[] args) {
        String a = "321.555-4321";
        String b = "321-555.4321";
        String c = "39.3";
        String d = "321.555.4321";
        String e = "9CoreyMSchafer@gmail.com";

        System.out.println(isValid(e));
    }

    public static boolean isValid(String inputString) {
        String pattern = "[a-zA-Z0-9.-_]+@[a-zA-Z-]+\\.[a-zA-Z]+";
        Pattern regex = Pattern.compile(pattern);
        Matcher matcher = regex.matcher(inputString);
        return matcher.matches();
    }
}



*/