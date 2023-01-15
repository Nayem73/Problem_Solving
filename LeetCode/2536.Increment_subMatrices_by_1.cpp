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

struct query {
    int start, end;
};

void incrementByD(int arr[], struct query q_arr[],
                  int n, int m, int d)
{
    int sum[n];
    memset(sum, 0, sizeof(sum));
 
    // for each (start, end) index pair perform the
    // following operations on 'sum[]'
    for (int i = 0; i < m; i++) {
 
        // increment the value at index 'start' by
        // the given value 'd' in 'sum[]'
        sum[q_arr[i].start] += d;
 
        // if the index '(end+1)' exists then decrement
        // the value at index '(end+1)' by the given
        // value 'd' in 'sum[]'
        if ((q_arr[i].end + 1) < n)
            sum[q_arr[i].end + 1] -= d;
    }
 
    // Now, perform the following operations:
    // accumulate values in the 'sum[]' array and
    // then add them to the corresponding indexes
    // in 'arr[]'
    arr[0] += sum[0];
    for (int i = 1; i < n; i++) {
        sum[i] += sum[i - 1];
        arr[i] += sum[i];
    }
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
	// vector<int> nums = {1,15,6,3};
int n = 3; vector<vector<int>> queries{
	{1,1,2,2},
	{0,0,1,1}
};

vector<vector<int>> mat(n, vector<int> (n));
	for (auto &x: queries) {
		int s1 = x[0], s2 = x[2];
		int t1 = x[1], t2 = x[3];
		// mat[s1][t1]++;
		// mat[s1]
		row[s1]++;
		if (t1+1 < n) row[t1+1]--;
		

		int yz = x[1];
		for (int i = x[0]; i <= x[2]; i++) {
			// mat[i][yz++]++;
			for (int j = x[1]; j <= x[3]; j++) {
				mat[i][j]++;
			}
			// rje()<<rji(i);
		}

		incrementByD(x, queries)


	}

	// for (auto x: mat) {
	// 	rje()<<X;
	// }
}

1 ... 5 r
0 ... 3 r
2 ... 6 r


1 ... 5 c

0 ... 3 c
