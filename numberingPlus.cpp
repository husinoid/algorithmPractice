// Created by JONGHWA HONG on 2019-04-22.
//site from 'SW Expert Academy'
//link URL:https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QPRjqA10DFAUq&categoryId=AV5QPRjqA10DFAUq&categoryType=CODE

#include <stdio.h>

int main () {

    int a;
    int ret = 0;
    scanf("%d", &a);
    for(int i = 0; i < 4; i++){
        int temp = a;
        ret += temp % 10;
        a= a/10;
    }
    printf("%d", ret);

    return 0;
}
 
