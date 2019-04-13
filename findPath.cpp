/*가중치 없는 방향 그래프 G가 주어졌을 때, 모든 정점 (i, j)에 대해서, i에서 j로 가는 경로가 있는지 없는지 구하는 프로그램을 작성하시오.
입력
첫째 줄에 정점의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄부터 N개 줄에는 그래프의 인접 행렬이 주어진다. i번째 줄의 j번째 숫자가 1인 경우에는 i에서 j로
가는 간선이 존재한다는 뜻이고, 0인 경우는 없다는 뜻이다. i번째 줄의 i번째 숫자는 항상 0이다.
출력
총 N개의 줄에 걸쳐서 문제의 정답을 인접행렬 형식으로 출력한다. 정점 i에서 j로 가는 경로가 있으면 i번째 줄의 j번째 숫자를 1로, 없으면 0으로 출력해야 한다.

 */
/*
#include <stdio.h>
int n;
int map[101][101];
int visited[101];

void dfs(int v) {
    for (int y = 1; y <= n; ++y) {
        if (map[v][y] == 1 && !visited[y]) {
            visited[y] = true;
            dfs(y);
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &map[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            visited[j] = false;
        }
        dfs(i);
        for (int x = 0; x < n; ++x) {
            if (visited[x]) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
*/