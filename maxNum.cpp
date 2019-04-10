/*
//site from 'SW Expert Academy'
//link URL: https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QQhbqA4QDFAUq&categoryId=AV5QQhbqA4QDFAUq&categoryType=CODE
 */


#include <stdio.h>

int main () {

    int n;
    int arr[11];
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int max = -1;
        for (int j = 0; j < 10; ++j) {
            scanf("%d", &arr[j]);
            if(arr[j] >= 0 && arr[j] <= 10000) {
                if (arr[j] > max){
                    max = arr[j];
                }
            }else {
                return 0;
            }
        }
        printf("#%d %d\n", i, max);
    }

    return 0;
}