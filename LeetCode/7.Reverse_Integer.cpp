class Solution {
public:
    int reverse(int x) {
        long long y = x;
        long long ret = 0;
        while (y) {
          int mod = y%10;
          y/=10;
          ret = ret*10 + mod;
          cout << ret << endl;
        }
      
      if (ret > (long long)INT_MAX || ret < (long long)INT_MIN) return 0;
      return (int)ret;
    }
};