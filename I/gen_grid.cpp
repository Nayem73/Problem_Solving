//BISMILLAHIR-RAHMANIR-RAHIM//
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCALM
#include <C:/I/rje.hpp>
#endif
#define endl '\n'
#define fast_io {ios_base::sync_with_stdio(0); cin.tie(0);}
#define ff first
#define ss second
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rand(int a, int b) {
	return a + rand() % (b-a+1);
}
int nn = 65;

string rand2(int len) {
	string s;
	for (int i = 0; i < len; i++) {
		int tmp = rand() % 12;
		if (tmp % 2 == 0 && (tmp % 3 == 0 || tmp%5==0)) {
			if (tmp % 3 == 0) s += ".";
			else s += "#";
		}
		else {
			s += nn;
			nn++;
		}
	}
	// cout << "--------------------------------------" << endl;
	return s;
}

int main(int argc, char* argv[]) {
//ALHAMDULILLAHI-RABBIL-ALAMIN//
#ifdef LOCALM
freopen("in1", "r", stdin);
// freopen("out1", "w", stdout);
#endif
fast_io;
//-------------------------------	
		//SUBHANALLAH//
//-------------------------------
	srand(atoi(argv[1]));
	int t = rand(1,1); cout << t << endl;
	while (t--) {
		int r =  rand(0, 11);
		int c =  r;
		cout << r << endl;
		string s[r];
		for (int i = 0; i < r; i++) {
			s[i] = rand2(c);
			// cin >> s[i];
		}
		for (int i = 0; i < r; i++) {
			// cout << s[i] <<' ' << s[i].size() << ' '<< s[i][2] << endl;
			cout << s[i] << endl;
		}
	}
	
}
