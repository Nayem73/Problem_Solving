class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int> st;
        for (int i = 1; i <= 2000; i++) {
            st.insert(i);
        }

        for (int X: arr) {
            st.erase(X);
        }

        int cnt = 0;
        for (int X: st) {
            ++cnt;
            if (cnt == k) return X;
        }
        return -1;
    }
};