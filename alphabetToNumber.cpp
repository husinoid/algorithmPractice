//site from 'SW Expert Academy'
//link URL:https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QLGxKAzQDFAUq&categoryId=AV5QLGxKAzQDFAUq&categoryType=CODE

#include <stdio.h>
#include <iostream>
using namespace std;

int main () {

    string a;
    scanf("%s", &a);
    for (int i = 0; i < a.length(); i++){
        printf("%d ", a.at(i)-64);
    }

    return 0;
}

 
