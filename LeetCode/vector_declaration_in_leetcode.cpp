class Solution {
const unsigned int nax = 103;
vector<vector<bool>> vis{nax, vector <bool> (nax, 0)};
vector<vector<bool>> gvis{nax, vector <bool> (nax, 0)};
vector<int> dirx{1,-1, 0,  0};
vector<int> diry{0, 0, 1, -1};

void dfs(int x, int y, vector<vector<int>> &grid, int n, int m) {
	vis[x][y] = true;
	gvis[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int tox = x + dirx[i];
		int toy = y + diry[i];

		if (tox < 0 || toy < 0 || tox >= n || toy >= m) continue;
		if (vis[tox][toy]) continue;
		if (grid[tox][toy] == 1) continue;
		vis[tox][toy] = true;
		gvis[tox][toy] = true;
		dfs(tox, toy, grid, n, m);
	}
}

bool chk(int n, int m) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vis[i][j]) {
				// cout << i << ' '<< j << endl;
				if (i-1 < 0 || j-1 < 0 || i+1 >= n || j+1 >= m) return false;
			}
		}
	}

	return true;
}

void vis_clr() {
	for (int i = 0; i < nax; i++) {
		for (int j = 0; j < nax; j++) {
			vis[i][j] = false;
		}
	}
}
public:
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;

        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0 && !gvis[i][j]) {
                    dfs(i,j, grid, n, m);
                    // rje()<<rji(vis[0]);
                    if (chk(n, m)) {
                        ans++;
                        // rje()<<rji(i)rji(j);
                        // return 0;
                    }
                    vis_clr();
                }
            }
        }

        return ans;
    }
};