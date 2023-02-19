class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> mp1;//, mp2;
        for (auto X: nums1) {
            mp1[X[0]] = X[1];
        }
        
        for (auto X: nums2) {
            //if(mp.find(X.first) )
            mp1[X[0]] += X[1];
        }
        
        vector<vector<int>> ans;
        for (auto X: mp1) {
            vector<int> tmp;
            tmp.push_back(X.first);
            tmp.push_back(X.second);
            ans.push_back(tmp);
        }
        return ans;
    }
};