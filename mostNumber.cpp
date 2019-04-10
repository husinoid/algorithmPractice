/*
https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV13zo1KAAACFAYh&categoryId=AV13zo1KAAACFAYh&categoryType=CODE
 */
/*

#include <stdio.h>

int main () {

    int n;

    for ( int j = 1; j <= 10; ++j) {
        int grade[101] ={0,};
        scanf("%d", &n);
        for (int i = 0; i < 1000; ++i) {
            int count;
            scanf("%d", &count);
            grade[count]++;//값을 정수로 받고 해당 배열 번호에 카운트 ++
        }
        int ans = 0;
        int max = -1;
        for (int j = 0; j <= 100; j++) {//0-100점 사이 카운트가 가장 많이 된 것 찾기
            if (grade[j] >= max)
            {
                ans = j;
                max = grade[j];
            }
        }
        printf("#%d %d\n", j, ans);
    }


    return 0;
}

 */