//site from 'SW Expert Academy'
//link URL: https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QRnJqA5cDFAUq&categoryId=AV5QRnJqA5cDFAUq&categoryType=CODE
 



#include <stdio.h>

int main() {

    int n;
    int arr[11];

    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {

        double sum = 0;
        for (int j = 0; j < 10; ++j) {
            scanf ("%d", &arr[j]);
                if (arr[j] != 0 && arr[j] < 10000) {
                    sum += arr[j] + 0.5;
                }
        }

        sum = (sum / 10);


        printf("#%d %d\n", i, int(sum));
        sum = 0;
    }

    return 0;
}

 
