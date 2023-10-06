class Solution {
public:
    int integerBreak(int n) {
     if (n==2) return 1;
     if (n==3) return 2;
            
    vector<long long> dp(n+5);

	for (int x = 1; x <= n; x++) { //supposed coins
		//cout << x <<"-------->\n";
		for (int i = 1; i <= n; i++) { //target
			if (i-x < 0) continue;
			//dp[i][0] += dp[i-x][0];
			//dp[i][1] = max({dp[i][1],i, (i-x==0?1:i-x) * x}); 
			dp[i] = max({dp[i], (long long)i, dp[i-x]*dp[x]});
			//cout << i << ": "<< dp[i] << endl;
		}
		//puts("");
	}
        return dp[n];
    }
};