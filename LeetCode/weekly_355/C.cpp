long long dfs(vector<int>& nums, int mask, unordered_map<int, int>& memo) {
    int n = nums.size();
    long long max_element = 0;
    for (int X : nums) max_element = max(X, max_element);

    if (n == 1)
        return max_element;

    if (memo.count(mask))
        return memo[mask];

    for (int i = 0; i < n - 1; i++) {
        if (!(mask & (1 << i)) && nums[i] <= nums[i + 1]) {
            int new_mask = mask | (1 << i);

            vector<int> new_nums = nums;
            new_nums[i + 1] = nums[i] + nums[i + 1];
            new_nums.erase(new_nums.begin() + i);

            max_element = max(max_element, dfs(new_nums, new_mask, memo));
        }
    }

    memo[mask] = max_element;

    return max_element;
}

long long largestElement(vector<int>& nums) {
    unordered_map<int, int> memo;
    return dfs(nums, 0, memo);
}