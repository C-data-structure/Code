#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//자료구조 실습 - 배열 [문제 1]

int main() { //메인함수
   int N, count;
   int x[100] = { NULL };
   int count_list[100] = { NULL };
   int i, j;
   int start, end;
   int temp,cnt=0;

   scanf("%d", &N);

   for (i = 0; i < N; i++) {
      scanf("%d", &x[i]);
   }

   scanf("%d", &count);
   
   for (j = 0; j < count*2; j++) {
      scanf("%d", &count_list[j]);
   }

   for (int p = 0; p < count; p++) {
      start = count_list[p * 2];
      end = count_list[p * 2 + 1];

      //printf("%d %d \n", start, end);

      cnt = (end - start + 1) / 2;

      for (int q = 0; q < cnt; q++) {
         temp = x[start];
         x[start] = x[end];
         x[end] = temp;

         //printf("%d %d \n", x[start], x[end]);

         start++;
         end--;
      }
   }

   for (i = 0; i < N; i++) {
      printf(" %d", x[i]);
   }


   return 0;
}