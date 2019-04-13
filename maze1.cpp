//https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14vXUqAGMCFAYD
/*
#include <stdio.h>

int n;
int map[17][17]={0,};
int sx, sy;

int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};

int find(int x, int y){

    for (int dir = 0; dir < 4; ++dir){
        int nx = x+dx[dir];
        int ny = y+dy[dir];
        if(nx>=0 && nx<16 && ny>=0 && ny<16) {
            if (map[nx][ny] == 3) {
                return 1;
            }
            if (map[nx][ny] == 0){
                map[nx][ny] = 1;
                int ans = find(nx,ny);
                if(ans == 1){
                    return 1;
                }
                map[nx][ny]=0;
            }
        }
    }
    return 0;
}

int main () {
    for (int z = 1; z <= 10; ++z) {
        scanf("%d", &n);
        for (int i = 0; i < 16; ++i) {
            for (int j = 0; j < 16; ++j) {
                scanf("%1d", &map[i][j]);
                if (map[i][j] == 2) {
                    sx = i;
                    sy = j;
                }
            }
        }
        int ret = find(sx, sy);
        printf("#%d %d\n", z, ret);
    }

    return 0;
}
*/