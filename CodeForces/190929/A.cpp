#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int l,r;
    scanf("%d %d", &l, &r);
    for (int i = l; i <= r; i++) {
        int used[10] = {0};
        bool vaild = true;
        for (int j = i; j != 0; ){
            int tmp = j % 10;
            j /= 10;
            if (used[tmp] != 0) {
                vaild = false;
                break;
            }
            else
                used[tmp]++;
        }
        if (!vaild)
            continue;
        else {
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}