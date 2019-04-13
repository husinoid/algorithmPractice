
#include <stdio.h>


int n, m, dx, dy, k;// 지도 n*m , 최초 주사위 위치 (dx,dy), 명령 갯수 k
int map[20][20];//주사위 판 max크기
int dice[6];//주사위 최초 정렬 , 초기값 0 선언

const int sx[] = { 0, 0, -1, +1 };
const int sy[] = { +1, -1, 0, 0 };

void move(int dir) {
    int ndice[6];
    if(dir == 0){//east->
        ndice[0] = dice[0];
        ndice[5] = dice[1];
        ndice[2] = dice[2];
        ndice[4] = dice[3];
        ndice[1] = dice[4];
        ndice[3] = dice[5];
    }
    if (dir == 1){//west<-
        ndice[0] = dice[0];
        ndice[4] = dice[1];
        ndice[2] = dice[2];
        ndice[5] = dice[3];
        ndice[3] = dice[4];
        ndice[1] = dice[5];
    }
    if (dir == 2){//north ^
        ndice[3] = dice[0];
        ndice[0] = dice[1];
        ndice[1] = dice[2];
        ndice[2] = dice[3];
        ndice[4] = dice[4];
        ndice[5] = dice[5];
    }
    if (dir == 3){//south (down)
        ndice[1] = dice[0];
        ndice[2] = dice[1];
        ndice[3] = dice[2];
        ndice[0] = dice[3];
        ndice[4] = dice[4];
        ndice[5] = dice[5];
    }
    for (int i = 0; i < 6; ++i){//ndice에 있는 값 전달
        dice[i] = ndice[i];
    }
}

int main () {

    scanf("%d %d %d %d %d", &n, &m, &dx, &dy, &k);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j){
            scanf("%d", &map[i][j]);//n*m 지도 할당
        }
    }
    map[dx][dy]=0;//주사위 위치는 항상 0

    int dir;
    for (int i = 0; i < k; i++){
        scanf("%d", &dir);//주사위 움직임 받기
        //바닥값과 확인 작업
        --dir;
        int nx = dx + sx[dir];
        int ny = dy + sy[dir];
        if(nx < 0 || nx >= n || ny < 0 || ny >= m) {
            continue;
            // processing
        }

        move(dir);//dice 움직임 받으면 함수 선언

        if (map[nx][ny] == 0) {
            map[nx][ny] = dice[3];//바닥이 0이면 주사위 바닥값을 복사해줌
        } else {
            dice[3] = map[nx][ny];//바닥에 값이 있으면 주사위로 복사 후 바닥은 0으로 초기
            map[nx][ny] = 0;
        }
        dx = nx;
        dy = ny;

        printf("%d\n", dice[1]);
    }


    return 0;
}
