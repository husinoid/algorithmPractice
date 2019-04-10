//site from 'SW Expert Academy'
//link URL: https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PrmyKAWEDFAUq&categoryId=AV5PrmyKAWEDFAUq&categoryType=CODE

#include <stdio.h>

int bubbleSort(int a[], int size) {
    int i, j, temp;

    for (i = size - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main () {

    int n;
    int arr[51];

    scanf("%d", &n);
    for ( int i = 0; i < n; ++i) {
        for ( int j =0; j < 50; ++j) {
            scanf("%d", &arr[i]);
        }
    }

    bubbleSort(arr, n);

    printf("#%d", n + 1);
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
    return 0;
}

 
