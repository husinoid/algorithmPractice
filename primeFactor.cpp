/*//site from 'SW Expert Academy'
//link URL: https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5Pl0Q6ANQDFAUq&categoryId=AV5Pl0Q6ANQDFAUq&categoryType=CODE
 */
/*
#include <stdio.h>

int main () {

    int n;
    int val;
    int arr[5] = {2, 3, 5, 7, 11};
    int count;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {

        scanf("%d", &val);
        printf("#%d ", i+1);
            for (int j = 0; j < 5; ++j) {
                count = 0;
                while(val % arr[j] == 0) {
                    ++count;
                    val /= arr[j];
                }
                printf("%d ", count);
            }
            printf("\n");
        }
    return 0;
}
*/

/*
#include <stdio.h>

int main () {

    int n;
    int val;
    int arr[5] = {2, 3, 5, 7, 11};
    int count[5];

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {

        scanf("%d", &val);

        for (int j = 0; j < 5; ++j) {
            count[j]=0;
            while(val % arr[j] == 0) {
                count[j] += 1;
                val /= arr[j];
            }

        }
        printf("#%d ", i+1);
        for ( int k = 0; k < 5; ++k) {
            printf("%d ", count[k]);
        }
        printf("\n");
    }
    return 0;
}


*/

