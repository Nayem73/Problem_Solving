class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dist(n, 1000003);
        dist[0] = 0;
        
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            for (int j = 1; j <= x; j++) {
                if (i+j < n) {
                    dist[i+j] = min(dist[i+j], dist[i] + 1);
                }
                else break;
            }
        }
        
        //for (int i = 0; i < n; i++) {
        //    cout << i << ": "<< dist[i] << endl;
        //}
        
        return dist[n-1];
    }
};