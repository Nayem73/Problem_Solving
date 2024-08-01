class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            vector<bool> rowF(n+1);
            vector<bool> colF(n+1);
            for (int j = 0; j < n; j++) {
                rowF[matrix[i][j]] = true;
                colF[matrix[j][i]] = true;
            }
            for (int i = 1; i <= n; i++) {
                if (!rowF[i] || !colF[i]) return false;
            }
        }
               
        return true;
    }
};