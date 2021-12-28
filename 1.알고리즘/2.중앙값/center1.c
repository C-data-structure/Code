#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
//세 정수의 중앙값을 찾는 알고리즘
int centerval(int a,int b,int c){
    int rst;
    if( a>=b){
        if(b>=c) return b;
        else if(a <=c) return a;
        else return c;
    }
    else if(a>c) return a;
    else if(b > c) return c;
    else return b;

}
int main(){
    
    int a,b,c;
    printf("세 정수의 중앙값을 구합니다.\n");
    printf("a의 값: ");scanf("%d",&a);
    printf("b의 값: ");scanf("%d",&b);
    printf("c의 값: ");scanf("%d",&c);

    int rst = centerval(a,b,c);
    printf("결과값: %d",rst);

}
