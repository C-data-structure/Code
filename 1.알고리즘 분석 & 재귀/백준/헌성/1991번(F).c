//1991번
#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
int check_point,N;

struct node{
    /* data */
    char parent_node;
    char left_node;
    char right_node;
    int num;

    
}val[26];

void right(int cp);
void left(int stt);

void left(int stt){
    if(stt > N) return;

    // printf("부모노드 출력:");
    printf("%c",val[stt].parent_node);//A B
    // printf("> 왼쪽 자식 노드 출력:");
    
    if('A' <= val[stt].left_node && val[stt].left_node  <= 'Z'){//조건 알파: 왼쪽 자식 노드 존재
        // printf("%c",val[stt].left_node);
        if('A' <= val[stt].right_node && val[stt].right_node  <= 'Z') check_point = stt;

        
        // val[stt].left_node = '.';
        left(stt);
    }//왼쪽 자식 노드가 없음
    //C까지 출력했다면 이제 왼쪽 노드가 없음 -> 체크 포인트로 이동
    // else if('A' <= val[check_point].right_node && val[check_point].right_node  <= 'Z')right(check_point);
}

void right(int cp){//인자는 체크포인트
    //이미 인자가 가리키는 숫자가 출력됬음
    int next_num;
    if(cp > N) return;

    if('A' <= val[cp].left_node && val[cp].left_node  <= 'Z'){printf("왼\n");left(cp);}
    else if('A' <= val[cp].right_node && val[cp].right_node  <= 'Z'){//오른쪽 자식 노드가 있는 경우: 조건 베타
        printf("%c",val[cp].right_node);//오른쪽 자식 노드를 출력한다.
        next_num = val[cp].right_node - 'A'; // C - A  = 2 ==> C
        right(next_num);//
    }
    
}

int main(){
    
    scanf("%d",&N); getchar();
    for(int i=0;i<N;i++){
        scanf("%c %c %c",&val[i].parent_node,&val[i].left_node,&val[i].right_node);
        val[i].num = val[i].parent_node - 'A';
        getchar();
    }
    // left(0);
    for(int i=0;i<5;i++)printf("%c\n",val[i].parent_node);
    // printf("%c\n",val[3].parent_node);
}
/**
 *  int count = 1,col = 1,N;
    printf("원하는 열을 입력하세요: ");scanf("%d",&N);
    for(int i=1;i<=N;i++){
        if(i==1){col = 1;count *=2;}
        else {col += count;count *=2;}
    }
 * 
A B C
B D .
C E F

A B C
B . .
C . .

A B C
B D .
C E F
E . .
F . .
 */