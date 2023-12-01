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

long long cal(string s1, string s, string& org_s) {
	vector<pair<int,int>> intervals;
	int s_size = s.size() - 1;
	intervals.push_back({s[0]-'0', s[s_size]-'0'});
	
	if (s1 != "-1") {
		int s1_size = s1.size() - 1;
		intervals.push_back({s1[0]-'0', s1[s1_size]-'0'});
	}

	sort(intervals.begin(), intervals.end());
	
	int lo = 0, hi = org_s.size() - 1;
	vector<pair<int,int>> remaining_intervals;
	for (auto interval: intervals) {
		if (lo < interval.first) {
			remaining_intervals.push_back({lo, interval.first-1});
		}
		lo = interval.second+1;
	}

	if (lo <= hi) {
		remaining_intervals.push_back({lo, hi});
	}
	rje()<<rji(intervals);
	rje()<<rji(remaining_intervals);
	for (auto interval : remaining_intervals) {
		intervals.push_back(interval);
	}

	long long returnNumber = 0;
	for (auto interval : intervals) {
		long long number = 0;
		for (int i = interval.first; i <= interval.second; i++) {
			number = number * 10 + (org_s[i]-'0');
		}
		rje()<<rji(number);
		returnNumber += number;
	}
	return returnNumber;

}

long long rec(string s, string& org_s) {
	rje()<<rji(s);
	if ((int)s.size() == 1) {
		long long got = cal("-1", s, org_s);
		return got;
	}

	long long got = rec(s.substr(1), org_s);
	long long cur_got = cal(string(1, s[0]), s.substr(1), org_s);
	return got + cur_got;
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
	string org_s;
	cin >> org_s;

	string s;
	for (int i = 0; i < (int)org_s.size(); i++) {
		s += i+'0';
	}

	long long got = rec(s, org_s);
	cout << got + stoi(org_s) << endl;
}

/*
current recursion logic
125 -> 1, 25 = 1, 22
25 -> 2, 5 = 1, 2, 5 (1 nai)
5 -> 5 and return; = 12, 5 (12 nai)
*/