#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//자료구조 실습 - 배열 [문제 3]

int main() { //메인함수
   int N,num=1;
   int i,j;
   int x[100][100] = { };
   int left, right, temp;

   scanf("%d", &N);

   for (i = 1; i <= N; i++) {
      for (j = 1; j <= N; j++) {
         x[i][j] = num;
         num++;
      }
   }

   left = 1;
   right = N;

   for (i = 1; i <= N; i++) {
      if (i % 2 == 0) {
         for (j = 1; j <= N/2; j++) {
            temp = x[i][left];
            x[i][left] = x[i][right];
            x[i][right] = temp;

            left++;
            right--;
         }
      }
   }

   for (i = 1; i <= N; i++) {
      for (j = 1; j <= N; j++) {
         printf(" %d", x[i][j]);
      }
      printf("\n");
   }


   return 0;
}