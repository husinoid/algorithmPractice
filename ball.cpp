/*
//site from 'BaekJoon'
//link URL: https://www.acmicpc.net/problem/1547
*/

#include <stdio.h>
int cup[4] = {0,1,2,3};

void swap(int dx, int dy){
    int temp;
    temp = cup[dx];
    cup[dx] = cup[dy];
    cup[dy] = temp;

    return;
}

int main () {

    int m;

    int dx, dy;
    scanf("%d", &m);
    if (m<=50 && m>0) {
        for (int i = 0; i < m; ++i) {
            scanf("%d %d", &dx, &dy);
            if (dx <= 3 && dy <= 3 && dx > 0 && dy > 0) {
                swap(dx, dy);
            }
        }
        for (int j =1; j <= 3; ++j) {
            if(cup[j]==1){
                printf("%d", j);
            }
        }
    }
    return 0;
}

