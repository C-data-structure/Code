#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() { //메인함수
   //백준 최소공배수 문제
   int n,a,b,gcd,result;
   int i,j;

   scanf("%d", &n);

   for (i = 0; i < n; i++) {
      gcd = result = 0;
      scanf("%d %d", &a, &b);
      for (j = 1; j <= a && j <= b; j++) {
         if (a%j == 0 && b%j == 0)
            gcd = j;
      }
      result = (a*b) / gcd;

      printf("%d \n", result);
   }


   return 0;
}