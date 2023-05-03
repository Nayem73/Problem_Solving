class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int sum1 = 0, sum2 = 0;
        int n = player1.size();
        int m = player2.size();
        bool flg = false;
        for (int i = 0; i < n; i++) {
            
            sum1+=player1[i];
            if (i-1 >= 0 && player1[i-1] == 10) sum1 += player1[i];
            else if (i-2 >= 0 && player1[i-2] == 10) sum1 += player1[i];
        }
        
        for (int i = 0; i < m; i++) {
            
            sum2+=player2[i];
            if (i-1 >= 0 && player2[i-1] == 10) sum2 += player2[i];
            else if (i-2 >= 0 && player2[i-2] == 10) sum2 += player2[i];
        }
        
        cout << sum1 << ' '<<sum2<<endl;
        
        if (sum1==sum2) return 0;
        else if (sum1 > sum2) return 1;
        return 2;
    }
};