#include  <stdio.h>
int main(){
    int *arr = NULL,*index=NULL,N,cnt=0,maxcnt=0;
    scanf("%d",&N);
    arr = (int *)malloc(sizeof(int)*N),index = (int *)malloc(sizeof(int)*N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]); index[i] = 1;
        /*값을 입력받고 현재 인덱스의 배열값을 1로 초기화한다.*/
        for(int j=0;j<i;j++) if(arr[j]>arr[i] && index[i] < index[j] + 1) index[i] = index[j] + 1;
        /*현재 인덱스까지 반복하여 해당 조건 만족 시 문장을 수행한다.
        1. 이전 인덱스의 요소가 현재 인덱스의 요솟값보다 큰 경우.
        2. 현재 색인의 인덱스(배열)의 값이 이전 색인의 인덱스(배열)값의 +1보다 작은 경우

        현재 색인의 인덱스(배열)값을 업데이트 한다.
         */
        if(maxcnt < index[i]) maxcnt = index[i];}//최대 길이를 저장한다.,
    printf("%d",maxcnt);
}