//quickSort Templete

#include<stdio.h>
//Prosto
void QuickSort(int arr[], int left, int right) {
    int L = left, R = right;
    int temp;
    int pivot = arr[(left + right) / 2]; //피봇 위치(중앙)의 값을 받음.

    printf("L : %d / pivot : %d / R : %d\n", L, (left + right)/2, R); //데이터 확인 부분.

    //아래의 while문을 통하여 pivot 기준으로 좌, 우 크고 작은 값 나열. = Partition
    while (L <= R) {

        //pivot이 중간 값이고, 비교 대상 arr[L], arr[R]은 pivot과 비교하니 중간 지점을 넘어가면 종료로 볼 수 있음.
        while (arr[L] < pivot) //left부터 증가하며 pivot 이상의 값을 찾음.
            L++;
        while (arr[R] > pivot) //right부터 감소하며 pivot 이하 값을 찾음.
            R--;
        //L, R 모두 최대 pivot 위치까지 이동.

        if (L <= R) { //현재 L이 R이하면. (이유 : L>R 부분은 이미 정리가 된 상태임).
            if (L != R) { //같지 않은 경우만.
                temp = arr[L];
                arr[L] = arr[R];
                arr[R] = temp;
            } //L과 R이 같다면 교환(SWAP)은 필요 없고 한 칸씩 진행만 해주면 됨.
            L++; R--; //그리고 L,R 한 칸 더 진행.


            for (int i = 0; i < 10; i++) { //데이터 확인 부분.
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }
    printf("\n");

    //조건 확인하여 재귀함수로.
    printf("QuickSort 재귀 호출 확인(만족 시 호출)\n1.left : %d < R : %d \n2.right : %d > L : %d\n\n", left, R, right, L); //데이터 확인 부분.
    if (left < R)
        QuickSort(arr, left, R);
    if (L < right)
        QuickSort(arr, L, right);
}



int main(void) {
    //int data[10] = { 10, 6, 7, 9, 3, 4, 2, 1, 5, 8 };
    //int data[10] = { 10, 6, 7, 2, 9, 1, 8, 3, 5, 4 };
    //int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int data[10] = { 2, 9, 4, 18, 5, 1, 7, 8, 15, 12 };

    //랜덤한 위치라고 생각.

    printf(" --정렬 전 순서--\n"); //정렬하기 전 상태 출력.
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n\n");

    QuickSort(data, 0, 9); // 9 = 10-1

    printf(" --정렬 후 순서--\n"); //정렬한 후 상태 출력.
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}

void quicksort(int arr[],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(arr[i]<=arr[pivot]&&i<last){
            i++;
            }
         while(arr[j]>arr[pivot]){
            j--;
            }
         if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }

      temp=arr[pivot];//pivot과 j(last) 교환
      arr[pivot]=arr[j];
      arr[j]=temp;
      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);

   }
}
