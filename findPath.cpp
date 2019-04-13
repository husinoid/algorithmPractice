// From 'BaekJoon'
//Problem URL: https://www.acmicpc.net/problem/11403

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
