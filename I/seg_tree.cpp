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
const int inf = 2e9;

/*
KEYNOTES:
------------------------------------------
merge(X,identity_element) = X
------------------------------------------
------------------------------------------
identity_transformation.combine(X) = X
------------------------------------------
------------------------------------------
ALWAYS: older_update.combine(newer_update)
------------------------------------------
*/

// example: addition: identity element is 0
// a + 0 = a or 0 + a = a
// min(x,INF) = x

struct node
{
	int v = 0;      // 1
	//int v = -inf;
	// use more variables if you want more information
	// these default values should be identity_element
	node(){}
	node(int val){
		//set val to leaf v
		v = val;  // 2
	}
	void merge(const node &l,const node &r){ // store the thing you wanna query
		//here merging left child , right child
		v = l.v + r.v;  // 3
		//v = max(l.v, r.v);
	}
};

// example: add on a range: identity transformation = 0
// old += new

// if old is identity which is 0, then 0 + new which new

struct update
{
	int v = 0; // 4
	// use more variables if you want more information
	// these default values should be identity_transformation
	update(){}
	update(int val){
		v = val; // 5
	}
	// combine the current update with the other update (see keynotes)
	void combine(update &other,const int32_t &tl,const int32_t &tr){
		//use += if want sum in update
		//here combines the previous update with new update. new update is "other"
		v = other.v; // 6
		// you can be sure that the "other" is newer than current
		
	}
	// store the correct information in the node x
	void apply(node &x,const int32_t &tl,const int32_t &tr){
		//use += if want sum in update
		//all node * v
		x.v = (tr - tl + 1) * v;  // 7
		// x.v = v; // if max or min then use it
	}
};

//template<typename node,typename update>
struct segtree
{
	int len;
	vector<node> t;
	vector<update> u;
	vector<bool> lazy;
	node identity_element;
	update identity_transformation;
	segtree(int l){
		len = l;
		t.resize(4 * len);
		u.resize(4 * len);
		lazy.resize(4 * len);
		identity_element = node();
		identity_transformation = update();
	}
	
	void pushdown(const int32_t &v, const int32_t &tl, const int32_t &tr){
		if(!lazy[v]) return;
		int32_t tm = (tl + tr) >> 1;
		apply(v<<1,tl,tm,u[v]);
		apply(v<<1|1,tm+1,tr,u[v]);
		u[v] = identity_transformation;
		lazy[v] = 0;
	}
	
	void apply(const int32_t &v, const int32_t &tl, const int32_t &tr, update upd){
		if(tl != tr){
			lazy[v] = 1;
			u[v].combine(upd,tl,tr);
		}
		upd.apply(t[v],tl,tr);
	}
	
	template<typename T>
	void build(const T &arr,const int32_t &v, const int32_t &tl, const int32_t &tr){
		if(tl == tr){
			t[v] = arr[tl];
			return;
		}
		int32_t tm = (tl + tr) >> 1;
		build(arr,v<<1,tl,tm);
		build(arr,v<<1|1,tm+1,tr);
		t[v].merge(t[v<<1],t[v<<1|1]);
	}
	
	node query(const int32_t &v,const int32_t &tl,const int32_t &tr,const int32_t &l,const int32_t &r){
		if(l > tr || r < tl){
			return identity_element;
		}
		if(tl >= l && tr <= r){
			return t[v];
		}
		pushdown(v,tl,tr);
		int32_t tm = (tl + tr) >> 1;
		node a = query(v<<1,tl,tm,l,r),b = query(v<<1|1,tm+1,tr,l,r),ans;
		ans.merge(a,b);
		return ans;
	}
	
	// rupd = range update
	void rupd(const int32_t &v,const int32_t &tl,const int32_t &tr,const int32_t &l,const int32_t &r,const update &upd){
		if(l > tr || r < tl){
			return;
		}
		if(tl >= l && tr <= r){
			apply(v,tl,tr,upd);
			return;
		}
		pushdown(v,tl,tr);
		int32_t tm = (tl + tr) >> 1;
		rupd(v<<1,tl,tm,l,r,upd);
		rupd(v<<1|1,tm+1,tr,l,r,upd);
		t[v].merge(t[v<<1],t[v<<1|1]);
	}
	
	public:
	template<typename T>
	void build(const T &arr){
		build(arr,1,0,len-1);
	}
	node query(const int32_t &l,const int32_t &r){
		return query(1,0,len-1,l,r);
	}
	void rupd(const int32_t &l,const int32_t &r,const update &upd){
		rupd(1,0,len-1,l,r,upd);
	}
};


int main() {
//ALHAMDULILLAHI-RABBIL-ALAMIN//
#ifdef LOCALM
freopen("1in.txt", "r", stdin);
freopen("1out.txt", "w", stdout);
#endif
fast_io;
//-------------------------------	
		//SUBHANALLAH//
//-------------------------------
	int n = 6;
	segtree s(n);
	vector<int> store(n, 1);
	s.build(store);

	s.rupd(2,4, 3);
	s.rupd(1,2, -2);

	for (int i = 0; i < n+1; i++) { //(n+1 = out of range)
		cout << s.query(i,i).v << ' ';
	}
	cout << endl << s.query(0, n-1).v << endl<<endl;

	s.rupd(4,5, 10);
	for (int i = 0; i < n+1; i++) {
		cout << s.query(i,i).v << ' ';
	}
	cout << endl << s.query(0, n-1).v << endl<<endl;

	s.rupd(1, 3, 1);
	for (int i = 0; i < n+1; i++) {
		cout << s.query(i,i).v << ' ';
	}
	cout << endl << s.query(0, n-1).v << endl<<endl;

	s.rupd(0, 2, 8);
	for (int i = 0; i < n+1; i++) {
		cout << s.query(i,i).v << ' ';
	}
	cout << endl << "sum from 3 to 5 is: "<< s.query(3,5).v << endl;
}