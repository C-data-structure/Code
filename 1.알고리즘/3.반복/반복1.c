#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
//1부터 n까지 정수합 구하기: while문 사용하기
int main(){
    int rst=0,n;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n값 입력: "); scanf("%d",&n);
    while (n>=0){
        rst += n;
        n --;
    }
    printf("1부터 n까지의 합은 %d입니다.",rst);
    
}
