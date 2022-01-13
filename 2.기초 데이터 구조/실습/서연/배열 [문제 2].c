#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//자료구조 실습 - 배열 [문제 2]

int main() { //메인함수
   int N,count,num;
   int x[100] = { NULL };
   int count_list[100] = { NULL };
   int i, j,k;
   int list[100] = { NULL };

   scanf("%d", &N);

   for (i = 0; i < N; i++) {
      scanf("%d", &x[i]);
   }

   scanf("%d", &count);

   for (j = 0; j < count; j++) {
      scanf("%d", &count_list[j]);
   }

   for (k = 0; k < count-1; k++) {
      num = count_list[k];
      list[k] = x[num];
   }

   for (int p = count-1; p > 0; p--) {
      num = count_list[p];
      x[num] = list[k-1];
      k--;
   }

   for (i = 0; i < N; i++) {
      printf(" %d", x[i]);
   }


   return 0;
}