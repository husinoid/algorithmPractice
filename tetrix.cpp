//site from 'BaekJoon
//link URL: https://www.acmicpc.net/problem/14500
//Lecture from Youtube: https://www.youtube.com/channel/UC_KRcBNnFQoN6EsvG87H6cg

#include <stdio.h>

int n, m;
int map[503][503];

const char block[19][4][5] = {
        {
            "1111",
            "0000",
            "0000",
            "0000",
        },
        {
            "1000",
            "1000",
            "1000",
            "1000",
        },
        {
            "1100",
            "1100",
            "0000",
            "0000",
        },
        {
            "1000",
            "1000",
            "1100",
            "0000",
        },
        {
            "1110",
            "1000",
            "0000",
            "0000",
        },
        {
            "1100",
            "0100",
            "0100",
            "0000",
        },
        {
            "1000",
            "1110",
            "0000",
            "0000",
        },
        {
            "0010",
            "1110",
            "0000",
            "0000",
        },
        {
            "1100",
            "0100",
            "0100",
            "0000",
        },
        {
            "1110",
            "0010",
            "0000",
            "0000",
        },
        {
            "1100",
            "1000",
            "0000",
            "0000",
        },
        {
            "1000",
            "1100",
            "0100",
            "0000",
        },
        {
            "0110",
            "1100",
            "0000",
            "0000",
        },
        {
            "0100",
            "1100",
            "1000",
            "0000",
        },
        {
            "1100",
            "0110",
            "0000",
            "0000",
        },
        {
            "1110",
            "0100",
            "0000",
            "0000",
        },
        {
            "0100",
            "1100",
            "0100",
            "0000",
        },
        {
            "0100",
            "1110",
            "0000",
            "0000",
        },
        {
            "1000",
            "1100",
            "1000",
            "0000",
        }
};


int get_count (int sy, int sx, int k) {
    int ret =0;
    for (int y =0; y < 4; ++y) {
        for (int x = 0; x < 4; ++x) {
            ret += (block[k][y][x] - '0') * map[sy + y][sx + x];

        }
    }
    return ret;
}

int main () {

    scanf("%d %d", &n, &m);
    for (int y =0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            scanf("%d", &map[y][x]);
        }
    }

    for (int y = n; y < n + 3; ++y) {
        for (int x = 0; x < m + 3; ++x) {
            map[y][x] = -100000;
        }
    }

    for (int y = 0; y < n + 3; ++y) {
        for (int x = m; x < m + 3; ++x) {
            map[y][x] = -100000;
        }
    }

    int ret;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            for (int k =0; k < 19; ++k) {
                int candi = get_count (y, x, k);
                if (ret < candi) {
                    ret = candi;
                }
            }
        }
    }
    printf("%d", ret);
    return 0;
}

 
