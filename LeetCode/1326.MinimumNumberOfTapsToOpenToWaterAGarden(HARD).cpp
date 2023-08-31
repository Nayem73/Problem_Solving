class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        
        vector<vector<int> > _tmp(n+1, vector<int> (2));
	for (int i = 0; i < n+1; i++) {
		_tmp[i][0] = i - ranges[i];
		_tmp[i][1] = i + ranges[i];
	}
	sort(_tmp.begin(), _tmp.end());
	//for (int i = 0; i < n+1; i++) cout << _tmp[i][0] << ' '<< _tmp[i][1] << endl;
		//puts("");

	vector<vector<int> > in;
	for (int i = 0; i < n+1; i++) {
		if (in.empty()) in.push_back({_tmp[i][0], _tmp[i][1]});
		else if (_tmp[i][1] > in[in.size()-1][1]) {
			if (_tmp[i][0] == in[in.size()-1][0]) in.pop_back();
			in.push_back({_tmp[i][0],_tmp[i][1]});
		}
	} 

	sort(in.begin(), in.end());
	for (int i = 0; i < in.size(); i++) {
		//cout << in[i][0] << ' '<< in[i][1] << endl;
	}
	for (int i = 1; i < in.size(); i++) {
		if (in[i][0] > in[i-1][1]) return -1;
	}

	//cout << endl;
	//cout << endl;
	vector<int> tmp; for (int i = 0; i < in.size(); i++) tmp.push_back(in[i][1]);
	vector<int> dp(n+5);
	for (int i = 0; i <= n; i++) {
		auto it = lower_bound(tmp.begin(), tmp.end(), i);
		if (it==tmp.end()) {cout<<-1; return 0;}

		int indx = distance(tmp.begin(), it);
		int left = in[indx][0];

		dp[i] = (left>0?dp[left]:0) + 1;
		//cout << i << ": "<< in[indx][0] << ","<<in[indx][1] << " -> "<<dp[i] << endl;
	}
        
        
        return dp[n];
        
        
    }
};