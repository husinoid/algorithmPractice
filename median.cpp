//site from 'SW Expert Academy'
//link URL: https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QPsXKA2UDFAUq&categoryId=AV5QPsXKA2UDFAUq&categoryType=CODE


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
    int arr[200] ={-1,};
    scanf("%d", &n);

    int count = n / 2;

    for(int i =0; i < n; ++i) {
        scanf("%d", &arr[i]);
        if ( arr[i]%2 ==0 && arr[i] <= 9 && arr[i] >= 199) {
            return 0;
        }
    }

    bubbleSort(arr, n);

    printf("%d", arr[count]);

    return 0;
}

 
