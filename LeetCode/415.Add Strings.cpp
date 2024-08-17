class Solution {
public:
    string addStrings(string num1, string num2) {
        // 421
        // 99
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        
        int n1 = num1.size();
        int n2 = num2.size();
        string ans;
        
        int carry = 0;
        for (int i = 0; i < max(n1, n2); i++) {
            int a = 0;
            if (i < n1) {
                a = num1[i] - '0';
            }
            
            int b = 0;
            if (i < n2) {
                b = num2[i] - '0';
            }
            
            int sum = a + b;
            sum += carry;
            //cout << sum << endl;
            
            if (sum >= 10) {
                carry = sum / 10;
                sum = sum % 10;
            } else {
                carry = 0;
            }
            ans += (sum+'0');
        }
        if (carry) ans += (carry+'0');

        int n = ans.size();
        while (n > 0 && ans[n-1] == '0') { //remove leading 0s
            ans.pop_back();
            n = ans.size();
        }
        if (ans.empty()) ans = "0";
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};