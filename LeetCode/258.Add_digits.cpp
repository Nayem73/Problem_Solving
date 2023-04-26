class Solution {
public:
    int addDigits(int num) {
        while (true) {
            string s = to_string(num);
            int sum = 0;
            for (int i = 0; i < (int)s.size(); i++) {
                sum += s[i] - '0';
            }

            string tmp = to_string(sum);
            if (tmp.size() == 1) return tmp[0] - '0';
            num = sum;
        }
        return -1;
    }
};