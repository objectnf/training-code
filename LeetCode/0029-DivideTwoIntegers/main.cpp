#include <iostream>
#include <cstdio>
using namespace std;

class Solution {
    public:
        int divide(int dividend, int divisor) {
            int neg = 0;
            long long ans = 0, dividend_long = dividend, divisor_long = divisor;
            if(divisor == 1)
                return dividend;
            else if(divisor == dividend)
                return 1;
            if(dividend_long < 0) {
                dividend_long = -dividend_long;
                neg++;
            }
            if(divisor_long < 0) {
                divisor_long = -divisor_long;
                neg++;
            }
            bool tmp[32] = {false};
            int num = 0;
            while (dividend_long >= divisor_long) {
                tmp[num] = dividend_long - ((dividend_long >> 1) << 1);
                num++;
                dividend_long = dividend_long >> 1;
            }
            num--;
            while (num >= 0) {
                ans = ans << 1;
                dividend_long = (dividend_long << 1) + int(tmp[num]);
                for(; dividend_long >= divisor_long; ) {
                    dividend_long -= divisor_long;
                    ans++;
                }
                num--;
            }
            if(ans > 0x7FFFFFFF)
                return 0x7FFFFFFF;
            if(neg == 0 || neg == 2)
                return int(ans);
            else
                return -int(ans);
        }
};


int main() {
    int num1 = -2147483648, num2 = -1;
    auto a = new Solution;
    printf("%d", a->divide(num1, num2));
    return 0;
}