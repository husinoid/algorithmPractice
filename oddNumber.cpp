//site from 'SW Expert Academy'
//link URL: https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QSEhaA5sDFAUq&categoryId=AV5QSEhaA5sDFAUq&categoryType=CODE
 

#include <stdio.h>

int main() {

    int n;
    int a[10];
    int ret = 0;
    int count = 0;

    scanf("%d", &n);
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < 10; i++) {
            scanf("%d", &a[i]);
            if (a[i] > 10000) {
                return 0;
            }
            if (a[i] % 2 == 1) {
                ret += a[i];
            }
        }
        count ++;
        printf("#%d %d\n", count,ret);
        ret=0;
    }

    return 0;
}
 
