#include <stdio.h>

int mySqrt(int x){
    if (x == 0)
        return 0;
    double last=0.0, res=1.0, precussion=0.5;
    while (last - res >= precussion || res - last >= precussion)
    {
        last = res;
        res = (res + x / res) / 2;
    }
    return (int)res;
}

int main() {
    int num = 8;
    printf("%d", mySqrt(num));
    return 0;
}