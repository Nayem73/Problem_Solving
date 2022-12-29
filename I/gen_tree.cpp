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
		int n = rand(2, 5); // nodes
		cout << n << endl;
		for (int i = 1; i < n; i++) { //n-1 edges
			cout << rand(0, i-1) << ' '<< i << endl;
		}
		
	}
	
}
