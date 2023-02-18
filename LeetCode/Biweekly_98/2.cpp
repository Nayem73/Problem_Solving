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
  // vector<int> nums{1,2,1001,1002,1003,1004,1005,1005,1004,1005,1005,100000000,1000000000,10000000};
// vector<int> nums{87,1196,484,1384,43,1701,1834,2203,2244,438,765,410,660,442,551,1153,45,394,802,1728,955,1672,2299,1761,2281,2140,1204,422,2059,2234,1854,1220,1347,966,1684,1366,605,2116,852,358,1201,2141,1709,1768};
vector<int> nums{5886,9150,237,8076,8981,6610,1027,7553,6399,281,4149,6558,9829,4250,8684,5080,4739,5891,7908,6062,18,4521};
  int n = nums.size();
  sort(nums.begin(), nums.end());
  rje()<<rji(nums);
  long long ans = nums[n-1] - nums[2];
  ans = min(ans, (long long)nums[n-3]-nums[0]);
  rje()<<rji(ans);

  vector<int> part1 = nums;
  long long sum = 0;
  for (int i = 2; i < n; i++) sum += (long long)part1[i];
  long long avg = sum/(n-2);
  
  vector<pair<long long, long long>> diffs;
  
  for (int i = 0; i < n; i++) {
    long long diff = abs(avg - part1[i]);
    diffs.push_back({diff, i});
  }
  sort(diffs.rbegin(), diffs.rend());
  part1[diffs[0].second] = avg;
  part1[diffs[1].second] = avg;
  sort(part1.begin(), part1.end());
  ans = min(ans, (long long)part1[n-1] - part1[0]);
  rje()<<rji(avg)rji(part1);


  part1 = nums;
  sum = 0;
  for (int i = 0; i < n-2; i++) sum += (long long)part1[i];
  avg = sum/(n-2);
  
  // vector<pair<long long, long long>> diffs;
  diffs.clear();
  
  for (int i = 0; i < n; i++) {
    long long diff = abs(avg - part1[i]);
    diffs.push_back({diff, i});
  }
  sort(diffs.rbegin(), diffs.rend());
  part1[diffs[0].second] = avg;
  part1[diffs[1].second] = avg;
  sort(part1.begin(), part1.end());
  ans = min(ans, (long long)part1[n-1] - part1[0]);
  rje()<<rji(avg)rji(part1);


  part1 = nums;
  sum = 0;
  for (int i = 0; i < n; i++) sum += (long long)part1[i];
  avg = sum/n;
  
  // vector<pair<long long, long long>> diffs;
  diffs.clear();
  
  for (int i = 0; i < n; i++) {
    long long diff = abs(avg - part1[i]);
    diffs.push_back({diff, i});
  }
  sort(diffs.rbegin(), diffs.rend());
  part1[diffs[0].second] = avg;
  part1[diffs[1].second] = avg;
  sort(part1.begin(), part1.end());
  ans = min(ans, (long long)part1[n-1] - part1[0]);
  ans = min(ans, (long long)nums[n-2] - nums[1]);
  rje()<<rji(avg);
  rje()<<rji(part1);
  rje()<<rji(ans);
}