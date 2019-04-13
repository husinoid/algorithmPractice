/*
//site from 'BaekJoon'
//link URL: https://www.acmicpc.net/problem/15686
//Lecture URL: https://www.youtube.com/watch?v=EWzqP8KoCXA&list=PLdHw4xVmS1psZInw07xdgZmnQcIrXru8J&index=18
 */

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

struct POSI {
        int y, x;
};

int n, m, type, ret;
vector<POSI> house, shop, pick;

void dfs (int pos) {
    if (pick.size() == m) {

        int candi = 0;

        for (int i = 0; i < house.size(); ++i) {
            int min_dist = 1000000;
            for (int j = 0; j < pick.size(); ++j){
                min_dist = min(min_dist, abs(house[i].y - pick[j].y) + abs(house[i].x - pick[j].x));
            }
            candi += min_dist;
        }

        if (ret > candi) {
            ret = candi;
        }

        return;
    }
    for (int i = pos; i < shop.size(); ++i) {
        pick.push_back(shop[i]);
        dfs(i + 1);
        pick.pop_back();
    }
}

int main () {

    POSI target;
    scanf ("%d %d", &n, &m);
    for (int y = 0; y < n; ++y){
        for (int x = 0; x < n; ++x){
            scanf("%d", &type);
            if (type ==1) {
                target.y = y, target.x = x;
                house.push_back(target);
            }
            if (type == 2) {
                target.y = y, target.x = x;
                shop.push_back(target);
            }
        }
    }

    ret = 0x7fffffff;
    dfs(0);
    printf("%d\n", ret);


    return 0;
}
