#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double power(double x, int n) { //재귀함수로 푼 거듭제곱 알고리즘
   if (n == 0)
      return 1;
   else if ((n % 2 == 0))
      return power(x*x, n / 2);
   else return x * power(x*x, (n - 1) / 2);
}

int main() { //메인함수
   int n;
   double x;
   printf("x의 n승 입력 : ");
   scanf("%lf %d", &x, &n);
   printf("%.0f \n", power(x, n));


   return 0;
}