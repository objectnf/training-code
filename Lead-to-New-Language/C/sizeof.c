#include <stdio.h>

int main() {
    // sizeof是<运算符>，不是函数，因此括号内的表达式不会执行。
    int a = 1;
    printf("sizeof(a++) = %lu, a = %d\n", sizeof(a++), a);

    // 同理，下面的也没办法运行
    printf("sizeof(a = a*8) = %lu, a = %d\n", sizeof(a = a*8), a);

    return 0;
}