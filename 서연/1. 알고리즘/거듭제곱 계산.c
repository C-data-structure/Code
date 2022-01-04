#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double slow_power(double x, int n) { //거듭제곱 계산하는 알고리즘
   int i;
   double result = 1.0;

   for (i = 0; i < n; i++)
      result *= x;

   return (result);
}

int main() { //메인함수
   int n;
   double x;
   printf("x의 n승 입력 : ");
   scanf("%lf %d", &x, &n);
   printf("%.0f \n", slow_power(x, n));


   return 0;
}