class Solution {
    vector<vector<int>> ans;
    void getPermutations(vector<int>& nums, vector<int> curNums) {
        if (nums.size() == curNums.size()) {
            ans.push_back(curNums);
        }
        
        map<int, int> track;
        for (int x : curNums) {
            track[x]++;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (track.find(nums[i]) != track.end()) continue;
            curNums.push_back(nums[i]);
            getPermutations(nums, curNums);
            curNums.pop_back();
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        getPermutations(nums, {});
        return ans;
    }
};