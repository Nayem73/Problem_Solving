class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> out(2*n);
        int indx = 0;
        for (int i = 0; i < n; i++) {
            out[indx++] = nums[i];
            out[indx++] = nums[(2*n)/2 + i];
        }
    
        return out;
}
    
};

/*
2 5 1     3 4 7
23 54 17
    
2 3 1     5 4 7
2 3 5     1
*/