//site from 'SW Expert Academy'
//link URL: https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QKdT6AyYDFAUq



#include <stdio.h>

int main () {

    int n;
    char stamp = '#';
    scanf("%d", &n);

    if ( n <= 100000){
        for (int i = 0; i < n; ++i) {
            printf("%c", stamp);
        }
    }else {
        printf("Out of number");
    }

    return 0;
}
