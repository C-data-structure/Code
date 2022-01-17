#include <stdio.h>

int Arr_print(int arr[100][100],int num_N,int num_M); // 달팽이 모양 배열 출력 함수

int main(void) {
	int n,m; //n*n배열의 n
	int arr[100][100] = { 0 };
	// printf("숫자를 입력하시오:"); //n의 크기 입력
	scanf("%d %d", &n,&m);
	Arr_print(arr, n,m);
	return 0;
}

int Arr_print(int arr[100][100],int num_N,int num_M) {
	int i; 
	int num1,num2, turn =1; //turn은 방향 바꾸어주는 변수, num은 반복횟수
	int count = 1; //1부터 n의 제곱까지 나타내주는 변수
	int col = 0, row = -1; //col은 행, row는 열
	num1 = num_N;
    num2 = num_M;
	while (num1!=0 && num2!=0) {
		for (i = 0; i < num2; i++) { //행(가로)담당
			row += turn;
			arr[col][row] += count;
			count++;
		}
		num1--; //행(가로)가 1번더 많이 진행하므로 행 진행후 감소
        
		for (i = 0; i < num1; i++) {//열(세로)담당
			col += turn;
			arr[col][row] += count;
			count++;
		}
        num2 --;
		turn *= -1;//방향 전환
	}
	for (int i = 0; i < num_N; i++) {
		for (int j = 0; j < num_M; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}