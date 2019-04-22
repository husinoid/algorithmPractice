
 //site from 'SW Expert Academy'
//link URL:https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PxmBqAe8DFAUq&categoryId=AV5PxmBqAe8DFAUq&categoryType=CODE

#include <stdio.h>

int main () {

    int n, ret, t;
    scanf("%d\n", &t);
    for (int i = 1; i <= t; i ++){
        ret=0;
        scanf("%d", &n);
        for (int j = 1; j <= n; j ++){
            if(j%2==0){
                ret -= j;
            }
            if(j%2!=0){
                ret += j;
            }
        }

        printf("#%d %d\n", i, ret);
    }

    return 0;
}
