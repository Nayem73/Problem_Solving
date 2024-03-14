class Solution {
    set<vector<int>> ans;
    void getPermutations(vector<int>& nums, vector<int> &curNumsIndexes) {
        if (nums.size() == curNumsIndexes.size()) {
            vector<int> tmp;
            for (int i : curNumsIndexes) {
                tmp.push_back(nums[i]);
            }
            ans.insert(tmp);
        }
        
        map<int, int> track;
        for (int x : curNumsIndexes) {
            track[x]++;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (track.find(i) != track.end()) continue;
            curNumsIndexes.push_back(i);
            getPermutations(nums, curNumsIndexes);
            curNumsIndexes.pop_back();
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>tmp;
        getPermutations(nums, tmp);
        
        vector<vector<int>> ret;
        for (vector<int> curVector : ans) {
            ret.push_back(curVector);
        }
        return ret;
    }
};