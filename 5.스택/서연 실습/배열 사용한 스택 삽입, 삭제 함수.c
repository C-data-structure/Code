#define SIZE 5

char stack[SIZE]; //스택을 위한 배열 
int top = -1;

int isFull(){ //스택이 포화 상태인지 검사하는 함수
    if (top>=SIZE -1){ 
        printf("Error");
        return 1;
    }
    return 0;
}

int isEmpty(){ //스택이 공백 상태인지 검사하는 함수
    if (top==-1){
        printf("Error");
        return 1;
    }
    return 0;
}

void push(data){ //스택 삽입 함수
    if (!isFull()){
        top++; //top을 1증가
        stack[top]=data; //해당 공간에 data삽입
    }
}

char pop(){ //스택 제거 함수
    if (!isEmpty()){ 
        char temp=stack[top]; //top 원소를 임시 변수 temp에 저장
        top--; //top변수 1감소
        return temp; //temp반환
    }
}