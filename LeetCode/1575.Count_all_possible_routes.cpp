class Solution {
    const int mod = 1e9+7;
public:
    int countRoutes(vector<int>& s, int start, int finish, int fuel) {
        int n = s.size(); vector<vector<int>> dp(fuel+1, vector<int> (n));
        
    dp[fuel][start] = 1;
    for (int f = fuel; f >= 1; f--) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int dist = abs(s[i]-s[j]);
				if (i!=j && f >= dist) {
					dp[f-dist][i] += dp[f][j];
					if (dp[f-dist][i] >= mod) dp[f-dist][i]-=mod;
				}
			}
		}
	}

	int ans = 0;
	for (int f = 0; f <= fuel; f++) {
		ans += dp[f][finish];
		if (ans >= mod) ans-=mod;
	}
    return ans;
    }
};