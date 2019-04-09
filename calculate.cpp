//site from 'BaekJoon
//link URL: https://www.acmicpc.net/problem/14888
//Lecture from Youtube: https://www.youtube.com/channel/UC_KRcBNnFQoN6EsvG87H6cg

#include <stdio.h>

int n; //개수 입력
int number[11]; //N은 최대 11개
int op[4]; //연산자는 4개로 고정
int ret_min = 1000000000, ret_max = -1000000000;
 //최솟값은 제일 크게, 최댓값은 제일 작게 ( 10억개 고정이므로 )
 //항상 변수가 cover 가능한지 학인 !!
void dfs ( int result, int count) { //전체 확인하는 것이므로 dfs 사용
    if (count == n - 1) {//모든 결과가 result에 들어가있다
        if (ret_min > result) {
            ret_min = result;
        }
        if (ret_max < result) {
            ret_max = result;
        }
        return;
    }

    for (int i = 0; i < 4; ++i) {//연산자 카운
        if (op[i] != 0) {//내가 사용하고 싶은 연산자의 count가 남아있는지
            --op[i];    //op 값에 -1
            if (i == 0) {
                dfs(result + number[count + 1], count + 1);
            } else if (i == 1) {
                dfs(result - number[count + 1], count + 1);
            } else if (i == 2) {
                dfs(result * number[count + 1], count + 1);
            } else if (i == 3) {
                dfs(result / number[count + 1], count + 1);
            }
            ++op[i];
        }
    }
}


int main () {

    scanf("%d", &n);
    for (int i =0; i < n; ++i) {
        scanf("%d", &number[i]);
    }
    for (int i=0; i < 4; ++i) {
        scanf("%d", &op[i]);
    }

    dfs ( number[0], 0);//현재값과 현재 오퍼레이터의 위치

    printf("%d\n%d\n", ret_max, ret_min);

    return 0;
}
