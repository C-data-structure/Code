#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
#define swap(tmp, x,y)do{tmp = x; x = y; y=tmp;}while(0)
/*
수열 A가 주어졌을 때, 가장 긴 감소하는 부분 수열을 구하는 프로그램을 작성하시오.

예를 들어, 수열 A = {10, 30, 10, 20, 20, 10} 인 경우에 가장 긴 감소하는 부분 수열은 A = {10, 30, 10, 20, 20, 10}  이고, 길이는 3이다.
*/
int main(){
    //<현재 인덱스보다 작은 인덱스의 값>이 (현재 인덱스의 값보다 큰 경우)
    //현재 인덱스의 전 값이 현재 인덱스의 값보다 큰 경우
    /*
    이때 중복처리가 되지 않도록 tmp 변수를 둬야함. -> tmp값도 비교대상으로 넣어야함.
    */
    int *arr = NULL,*index=NULL,N,cnt=0,maxcnt=0;
    scanf("%d",&N);
    arr = (int *)malloc(sizeof(int)*N),index = (int *)malloc(sizeof(int)*N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]); index[i] = 1;
        for(int j=0;j<i;j++) if(arr[j]>arr[i] && index[i] < index[j] + 1) index[i] = index[j] + 1;
        if(maxcnt < index[i]) maxcnt = index[i];
    }
    printf("%d",maxcnt);
}