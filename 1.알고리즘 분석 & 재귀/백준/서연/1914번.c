#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hanoi_tower(int n, int x,int y) { //하노이탑 재귀 알고리즘
   int z;

   if (n == 1)
      printf("1 : %d -> %d \n", x, y);

   else {
      z = 6 - x - y;

      hanoi_tower(n - 1, x, z);
      printf("%d : %d -> %d \n", n, x, y);
      hanoi_tower(n - 1, z, x);
   }
}

int main() { //메인함수
   int n;
   scanf("%d", &n);
   hanoi_tower(n, 1, 2);


   return 0;
}