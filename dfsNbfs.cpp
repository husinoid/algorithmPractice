//문제
//그래프를 DFS로 탐색한 결과와 BFS로 탐색한 결과를 출력하는 프로그램을 작성하시오. 단, 방문할 수 있는 정점이 여러 개인 경우에는
//정점 번호가 작은 것을 먼저 방문하고, 더 이상 방문할 수 있는 점이 없는 경우 종료한다. 정점 번호는 1번부터 N번까지이다.
//입력
//첫째 줄에 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다.
//다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다. 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 입력으로 주어지는 간선은 양방향이다.
//출력
//첫째 줄에 DFS를 수행한 결과를, 그 다음 줄에는 BFS를 수행한 결과를 출력한다. V부터 방문된 점을 순서대로 출력하면 된다.
//https://www.acmicpc.net/problem/1260
/*예제입력
4 5 1
1 2
1 3
1 4
2 4
3 4
 */
/*
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
 */