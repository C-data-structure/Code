#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
int calculate(int n,int m){//함수 정의
    // printf("n = %d| m= %d\n",n,m);
    int large = (n>m?n:m),small = (n>m?m:n);
    int val = large;
    while(1){
        if(val % large == 0 && val % small == 0 ) break;
        else val ++;
    }
    return val;

}

int main(){

    int rep, n,m,cnt=0;//두변수와
    int rst[1001];
    //함수에서 값을 바꿔야하므로 포인터에 연결
    scanf("%d",&rep);getchar();
    for(int i=0;i<rep;i++){
        scanf("%d %d",&n,&m);getchar();
        rst[cnt] = calculate(n,m);cnt ++;
    }
    for(int j = 0;j<cnt;j++)printf("%d\n",rst[j]);
    
}
