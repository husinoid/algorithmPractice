/*
 https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PnnU6AOsDFAUq&categoryId=AV5PnnU6AOsDFAUq&categoryType=CODE
 */
/*
#include <stdio.h>

int main () {

    int t, ret;
    int arr[4];
    int cal[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d", &t);
    for(int z = 1; z <= t; z++) {
        ret = 0;
        for (int i = 0; i < 4; i++) {
            scanf("%d", &arr[i]);
        }
        if(arr[0]==arr[2]){
            ret = arr[3] - arr[1] + 1;
        }
        else{
            ret = cal[arr[0]] - arr[1] +1 + arr[3];
        }
        int temp = 0;
        temp =  arr[2]-arr[0];
        if (temp >0){
            for (int i = arr[0]+1; i < arr[2]; i ++){
                ret = ret + cal[i];
            }
        }

        printf("#%d %d\n", z, ret);
    }


    return 0;
}
 */