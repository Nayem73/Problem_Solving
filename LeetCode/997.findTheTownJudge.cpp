class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> adj[n+1];
        vector<int> adj2[n+1];
        for (auto X: trust) {
            adj[X[0]].push_back(X[1]);
            adj2[X[1]].push_back(X[0]);
        }   
        
        for (int i = 1; i <= n; i++) {
            if (adj[i].empty()) {
                if (adj2[i].size() == n-1) return i;
            }
        }
        return -1;
    }
};