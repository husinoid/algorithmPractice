/*
#include <stdio.h>

int n, ret; //보드 사이즈

struct BOARD {
    int map[20][20];//보드 사이즈 선

    void rotate() {//회전시킴
        int temp[20][20];//90도 회전을 위한 배열 선언

        for (int y=0; y<n; ++y){
            for(int x=0; x<n; ++x){
                temp[y][x] = map[n-x-1][y];//90도 회전 , !!!! n-x-1: 여기서 1을 빼주는 이유는 배열이 0부터 시작하기 때문
            }
        }

        for (int y =0; y<n; ++y){
            for (int x=0; x<n; ++x){
                map[y][x] = temp[y][x];//temp값을 map 값에 삽입
            }
        }

    }

    int get_max() {//최댓값 구하기
        int ret=0;

        for (int y=0; y<n; ++y){
            for(int x=0; x<n; ++x){
                if ( ret< map[y][x]) {
                    ret = map[y][x];//만약 ret보다 map  값이 크다면 ret에 map 값 삽입
                }
            }
        }
        return ret;
    }

    void up() {
        int temp[20][20];

        for (int x = 0; x < n; ++x){//가로방향을 다 돌고 세로방향을 돌기 때문에 X부터 선언
            int flag = 0, target = -1;//연속되게 계산되지 않도록
                                      //for문 안에서만 필요하므로 안에서 선언
            for (int y = 0; y < n; ++y){
                if (map[y][x] == 0) {
                    continue;
                }
                if (flag == 1 && map[y][x] == temp[target][x]) {
                    temp[target][x] *= 2, flag = 0;
                }
                else {
                    temp [++target][x] = map[y][x], flag = 1;
                }
            }
            for (++target; target < n; ++target) {
                temp[target][x] = 0;
            }
        }
        for (int y= 0; y < n; ++y) {
            for (int x = 0; x < n; ++x) {
                map[y][x] = temp[y][x];
            }
        }
    }
};

void dfs(BOARD cur, int count) {
        if (count == 5) {
        int candi = cur.get_max();
        if (ret < candi) {
            ret = candi;
        }
        return;
    }

    for (int dir = 0; dir < 4; ++dir) {
        BOARD next = cur;
        next.up();
        dfs(next, count +1);
        cur.rotate();
    }
}


int main()
{

    BOARD board;
    scanf("%d", &n);
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < n; ++x) {
            scanf("%d", &board.map[y][x]);
        }
    }

    ret =0;
    dfs(board, 0);
    printf("%d\n", ret);

    return 0;
}
*/