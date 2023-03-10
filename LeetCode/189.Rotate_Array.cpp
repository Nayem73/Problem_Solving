class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        int indx = 0;
        int val = nums[0];
        while (cnt < n) {
            indx = (indx + k) % n;
            if (cnt==1) {
                cout << indx<<' ' << ' '<<val << endl;
            }
            
            int val2 = nums[indx];
            nums[indx] = val;
            val = val2;
           // if (cnt==2) break;
            cnt++;
        }

        //return nums;
    }
};