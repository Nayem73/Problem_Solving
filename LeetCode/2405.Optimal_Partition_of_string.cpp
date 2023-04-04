class Solution {
//bool bs(int mid, string &s) {
int fnc(string &s) {
	int n = s.size();
	map<char, int> mp;
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		if (!mp.empty() && mp.find(s[i]) != mp.end()) {
			mp.clear();
			mp[s[i]]++;
			cnt++;
		}
		else mp[s[i]]++;
	}
	//if (cnt <= mid) return true;
	return cnt;
}
public:
    int partitionString(string s) {
			return fnc(s);
    }
};