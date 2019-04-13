
//Research for general DFS Method
//출처: https://ksj14.tistory.com/entry/깊이-우선-탐색-Depth-First-Search [:: ADVANCE ::]

#include <stdio.h>

int n;
int map[30][30], visit[30];

void DFS(int v)
{
    int i;

    visit[v] = 1;
    for (i = 1; i <= n; i++)    {
        if (map[v][i] == 1 && !visit[i])    {
            printf("%d에서 %d로 이동\n", v, i);

            DFS(i);        // 재귀 !        재귀라서 나아갈 곳이 없으면 다시 돌아온다.
        }
    }
}

int main(void)
{
    int start;
    int v1, v2;

    scanf("%d%d", &n, &start);

    while (1)
    {
        scanf("%d%d", &v1, &v2);
        if (v1 == -1 && v2 == -1)    {
            break;
        }
        map[v1][v2] = map[v2][v1] = 1;
    }

    DFS(start);

    return 0;
}
