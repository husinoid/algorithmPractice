//site from 'BaekJoon
//link URL: https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QKdT6AyYDFAUq

//주어진 숫자만큼 # 을 출력해보세요.
//주어질 숫자는 100,000 이하다.



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
