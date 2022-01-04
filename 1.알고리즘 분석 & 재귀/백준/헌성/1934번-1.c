#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>

int fuction_max(int n, int m){
    return m? fuction_max(m,n%m):n;
}

int fuction_min(int n, int m){
    return (n*m)/fuction_max(n,m);
}

int main(){

   int n,m,rep;scanf("%d",&rep);getchar();
   for(int i=0;i<rep;i++){scanf("%d %d",&n,&m);getchar();printf("%d\n",fuction_min(n,m));}
   

   
    
}
