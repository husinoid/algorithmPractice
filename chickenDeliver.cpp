/*입력
첫째 줄에 N(2 ≤ N ≤ 50)과 M(1 ≤ M ≤ 13)이 주어진다.
둘째 줄부터 N개의 줄에는 도시의 정보가 주어진다.
도시의 정보는 0, 1, 2로 이루어져 있고, 0은 빈 칸, 1은 집, 2는 치킨집을 의미한다. 집의 개수는 2N개를 넘지 않으며, 적어도 1개는 존재한다. 치킨집의 개수는 M보다 크거나 같고, 13보다 작거나 같다.
출력
첫째 줄에 폐업시키지 않을 치킨집을 최대 M개를 골랐을 때, 도시의 치킨 거리의 최솟값을 출력한다.

https://www.acmicpc.net/problem/15686
 */


/*
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
*/