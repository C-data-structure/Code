#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
#define swap(tmp, x,y)do{tmp = x; x = y; y=tmp;}while(0)
/*
수열 A가 주어졌을 때, 가장 긴 감소하는 부분 수열을 구하는 프로그램을 작성하시오.

예를 들어, 수열 A = {10, 30, 10, 20, 20, 10} 인 경우에 가장 긴 감소하는 부분 수열은 A = {10, 30, 10, 20, 20, 10}  이고, 길이는 3이다.
*/
int main(){
    int N,num[1001],cnt = 0,maxcnt = 1,tmp;
    scanf("%d",&N);
    for(int i=0;i<N;i++)scanf("%d",&num[i]);

    for (int i = 0; i < N; i++) //N번 반복
        for (int j = 0; j < N-1; j++) {if(num[j] == num[j+1]) num[j+1] = 0; if(num[j] < num[j+1]) swap(tmp, num[j],num[j+1]);}

    for (int i = 1; i < N; i++){
        if(num[i-1]>num[i])cnt ++;
        else{
            if(cnt > maxcnt) maxcnt = cnt;
            cnt = 0;
        }
    }
    printf("%d ",maxcnt);
}