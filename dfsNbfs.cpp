//site from 'BaekJoon'
//link URL: https://www.acmicpc.net/problem/1260
/*예제입력
4 5 1
1 2
1 3
1 4
2 4
3 4
 */

#include <stdio.h>

int graph[1001][10001] ={0};
int dfsVisit[1001]={0};
int bfsVisit[1001]={0};
int queue[1001];

void dfs(int v, int n) {
    int i;

    dfsVisit[v] = 1;
    printf("%d ", v);
    for (i = 1; i <= n; ++i) {
        if (graph[v][i] == 1 && dfsVisit[i] == 0){
            dfs(i, n);
        }
    }
    return;

}
void bfs(int v, int n) {
    int front = 0;
    int rear = 0;
    int pop ;
    int i;

    printf("%d ", v);
    queue[0] = v;
    rear++;
    bfsVisit[v] =1;

    while (front < rear) {
        pop = queue[front];
        front++;

        for (i = 1; i <= n; ++i) {
            if (graph[pop][i] == 1 && bfsVisit[i] == 0) {
                printf("%d ", i);
                queue[rear] = i;
                rear++;
                bfsVisit[i] = 1;
            }
        }
    }
    return;

}

int main () {

    int n, m, start;
    int i, x, y;

    scanf("%d %d %d", &n, &m, &start);

    for (i = 0; i < m; ++i) {
        scanf("%d %d", &x, &y);
        graph[x][y] = 1;
        graph[y][x] = 1;
    }

    dfs(start,n);
    printf("\n");
    bfs(start,n);




    return 0;
}
 
