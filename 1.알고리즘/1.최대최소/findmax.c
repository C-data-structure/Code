#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
//3개의 변수 중 가장 큰 값을 찾는 알고리즘
int main(){
    int a,b,c;
    int max;
    printf("세 정수의 최대값 구하기\n");

    printf("a의 값: ");scanf("%d",&a);
    printf("b의 값: ");scanf("%d",&b);
    printf("c의 값: ");scanf("%d",&c);

    max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    printf("최대값은 %d입니다.",max);

}
