/*
 * 입력
첫째 줄에 N (1 ≤ N ≤ 15)이 주어진다.
둘째 줄부터 N개의 줄에 Ti와 Pi가 공백으로 구분되어서 주어지며, 1일부터 N일까지 순서대로 주어진다.
 (1 ≤ Ti ≤ 5, 1 ≤ Pi ≤ 1,000)
출력
첫째 줄에 백준이가 얻을 수 있는 최대 이익을 출력한다

 https://www.acmicpc.net/problem/14501

 */

/*
#include <stdio.h>
#include <algorithm>
using namespace std;

int n;
int T[15], P[15];
int cache[15];

int solve (int day){
    if (day > n) return -987654321;
    if (day == n) return 0;

    int& ret = cache[day];
    if (ret != -1) return ret;

    ret = max(solve(day + 1), solve(day + T[day]) + P[day]);
    return ret;
}

int main () {

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &T[i], &P[i]);
        cache[i] = -1;
    }

    int ret = solve(0);
    printf("%d\n", ret);

    return 0;
}

 */