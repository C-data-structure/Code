#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
//두 변수 a,b에 정수를 입력하고 b-a를 출력하는 프로그램을 작성하라.
//단 a>b이면 변수 b의 값을 다시 입력해야한다.
int main(){
    int a,b;
    printf("a를 입력하세요: ");scanf("%d",&a);
    while(1){
        printf("b를 입력하세요: ");scanf("%d",&b);
        if(b>a){
            printf("결과값은 %d 입니다.",b-a);
            return 0;
        }else printf("다시 ");
    }
    
}
