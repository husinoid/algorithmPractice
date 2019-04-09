/*
#include <stdio.h>

int n, m, sy, sx, k;
int map[20][20];

int dice[6];

const int dy[] = { 0, 0, -1, +1 };
const int dx[] = { +1, -1, 0, 0 };

void move_dice(int dir) {
    int ndice[6];
    switch (dir)
    {
        case 0:
            ndice[0] = dice[0];
            ndice[5] = dice[1];
            ndice[2] = dice[2];
            ndice[4] = dice[3];
            ndice[1] = dice[4];
            ndice[3] = dice[5];
            break;
        case 1:
            ndice[0] = dice[0];
            ndice[4] = dice[1];
            ndice[2] = dice[2];
            ndice[5] = dice[3];
            ndice[3] = dice[4];
            ndice[1] = dice[5];
            break;
        case 2:
            ndice[3] = dice[0];
            ndice[0] = dice[1];
            ndice[1] = dice[2];
            ndice[2] = dice[3];
            ndice[4] = dice[4];
            ndice[5] = dice[5];
            break;
        case 3:
            ndice[1] = dice[0];
            ndice[2] = dice[1];
            ndice[3] = dice[2];
            ndice[0] = dice[3];
            ndice[4] = dice[4];
            ndice[5] = dice[5];
            break;
        default:
            break;
    }
    for (int i = 0; i < 6; ++i) {
        dice[i] = ndice[i];
    }
}

int main()
{
    scanf("%d %d %d %d %d", &n, &m, &sy, &sx, &k);
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            scanf("%d", &map[y][x]);
        }
    }

    int dir;
    for (int i = 0; i < k; ++i) {
        scanf("%d", &dir);
        --dir;
        int ny = sy + dy[dir];
        int nx = sx + dx[dir];
        if (ny < 0 || ny >= n || nx < 0 || nx >= m) {
            continue;
        }

        move_dice(dir);

        if (map[ny][nx] == 0) {
            map[ny][nx] = dice[3];
        }
        else {
            dice[3] = map[ny][nx];
            map[ny][nx] = 0;
        }
        sy = ny;
        sx = nx;

        printf("%d\n", dice[1]);
    }

    return 0;
}
*/
/*

#include <stdio.h>

int n, m, sx, sy, k;
int map[20][20];
int dice[6];

const int dx[] = { 0, 0, -1, +1};
const int dy[] = { +1, -1, 0, 0};


void move_dice(int dir) {
    int ndice[6];


    if (dir == 1){
        ndice[0] = dice[0];
        ndice[5] = dice[1];
        ndice[2] = dice[2];
        ndice[4] = dice[3];
        ndice[1] = dice[4];
        ndice[3] = dice[5];
    }
    if (dir == 2){
        ndice[0] = dice[0];
        ndice[4] = dice[1];
        ndice[2] = dice[2];
        ndice[5] = dice[3];
        ndice[3] = dice[4];
        ndice[1] = dice[5];
    }
    if (dir == 3) {
        ndice[3] = dice[0];
        ndice[0] = dice[1];
        ndice[1] = dice[2];
        ndice[2] = dice[3];
        ndice[4] = dice[4];
        ndice[5] = dice[5];
    }
    else {
        ndice[1] = dice[0];
        ndice[2] = dice[1];
        ndice[3] = dice[2];
        ndice[0] = dice[3];
        ndice[4] = dice[4];
        ndice[5] = dice[5];
    }

    for(int i=0; i < 6; ++i) {
        dice[i] = ndice[i];
    }
}

int main() {

    scanf("%d %d %d %d %d", &n, &m, &sx, &sy, &k);
    for (int i = 0; i < n; ++i) {
        for (int j =0; j < m; ++j) {
            scanf("%d", &map[i][j]);
        }
    }

    int dir;

    for (int i =0; i < k; ++i) {
        scanf("%d", &dir);
        --dir;
        int nx = sx + dx[dir];
        int ny = sy + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
            continue;
        }

        move_dice(dir);

        if (map[nx][ny] == 0) {
            map[nx][ny] = dice[3];
        } else {
            dice[3] = map[nx][ny];
            map[nx][ny] = 0;
        }

        sx = nx;
        sy = ny;

        printf("%d\n", dice[1]);
    }

    return 0;
}

*/