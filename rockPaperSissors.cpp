//site from 'SW Expert Academy'
//link URL: https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PjKXKALcDFAUq


#include <stdio.h>


int main () {

    int a, b;
    char ret;

    scanf("%d %d", &a, &b);

    if ( a ==1){
        if ( b == 2) {
            ret = 'B';
        }
        if ( b == 3) {
            ret = 'A';
        }
    }
    if ( a ==2){
        if (b == 1) {
            ret = 'A';
        }
        if ( b == 3) {
            ret = 'B';
        }
    }
    if ( a ==3){
        if (b == 1) {
            ret = 'B';
        }
        if ( b == 2) {
            ret = 'A';
        }
    }



    printf("%c", ret);

    return 0;
}
 
