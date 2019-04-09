/*
#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;

struct INFO {
    int ry, rx, by, bx, count;
};

INFO start;
char map[10][11];//문자열 끝에 문자를 저장하기 위해 x는 +1

int bfs() {
    const int dy[] = { -1, 1, 0, 0 };//4방향 탐
    const int dx[] = { 0, 0, -1, 1 };

    int visited[10][10][10][10] = { 0, };//0으로 초기
    queue<INFO> q;
    q.push(start);//초깃값 위치 저장
    visited[start.ry][start.rx][start.by][start.bx] = 1;//방문했다

    int ret = -1;//10번 이상이면 -1을 출력해주면 되므로
    while (!q.empty()) {
        INFO cur = q.front();   q.pop();
        if (cur.count > 10) break;
        if (map[cur.ry][cur.rx] == 'O' && map[cur.by][cur.bx] != 'O') {
            ret = cur.count;//최적값을 찾은 경우            break;
        }

        for (int dir = 0; dir < 4; ++dir) {
            int next_ry = cur.ry;
            int next_rx = cur.rx;
            int next_by = cur.by;
            int next_bx = cur.bx;

            while (1) {//빨간공
                if (map[next_ry][next_rx] != '#' && map[next_ry][next_rx] != 'O')//벽이 아니고 구멍이 아니라면 계속 진행
                {
                    next_ry += dy[dir], next_rx += dx[dir];//계속 갱신
                }
                else {
                    if (map[next_ry][next_rx] == '#') {
                        next_ry -= dy[dir], next_rx -= dx[dir];
                    }
                    break;
                }
            }

            while (1) {//파란
                if (map[next_by][next_bx] != '#' && map[next_by][next_bx] != 'O') {
                    next_by += dy[dir], next_bx += dx[dir];
                }
                else {
                    if (map[next_by][next_bx] == '#') {
                        next_by -= dy[dir], next_bx -= dx[dir];
                    }
                    break;
                }
            }

            if (next_ry == next_by && next_rx == next_bx) {
                if (map[next_ry][next_rx] != 'O') {
                    int red_dist = abs(next_ry - cur.ry) + abs(next_rx - cur.rx);
                    int blue_dist = abs(next_by - cur.by) + abs(next_bx - cur.bx);
                    //abs=절댓값 , 어느 방향으로 움직였는지 모르기 때문
                    if (red_dist > blue_dist) {
                        next_ry -= dy[dir], next_rx -= dx[dir];
                    }
                    else {
                        next_by -= dy[dir], next_bx -= dx[dir];
                    }
                }
            }

            if (visited[next_ry][next_rx][next_by][next_bx] == 0) {
                visited[next_ry][next_rx][next_by][next_bx] = 1;
                INFO next;
                next.ry = next_ry;
                next.rx = next_rx;
                next.by = next_by;
                next.bx = next_bx;
                next.count = cur.count + 1;
                q.push(next);
            }
        }
    }
    return ret;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%s", map[i]);
    }

    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            if (map[y][x] == 'R') {
                start.ry = y, start.rx = x;
            }
            if (map[y][x] == 'B') {
                start.by = y, start.bx = x;
            }
        }
    }
    start.count = 0;

    int ret = bfs();
    printf("%d\n", ret);

    return 0;
}
*/
