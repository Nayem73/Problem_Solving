class Solution {
string num;
long long remainder = 0;
    
bool Div(char cur, int divisor) {
    //for (int i = 0; i < num.length(); i++) {
        remainder = (remainder * 10LL + (cur - '0')) % divisor;
    //}
    return remainder == 0;
}
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> ans((int)word.size());
        for (int i = 0; i < (int)word.size(); i++) {
            
           //num += word[i];
            if (Div(word[i], m)) {
                ans[i] = 1;
            }
            else ans[i] = 0;
        }
        return ans;
    }
};