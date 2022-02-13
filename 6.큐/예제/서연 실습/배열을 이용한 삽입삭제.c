#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int front = 0;
int rear = 0;
int Q[N];

void enqueue(int data) {
	if ((rear + 1) % N == front) {
		printf("Error \n");
		return 0;
	}
	rear = (rear + 1) % N;
	//데이터 삽입 시 (rear+1)%(일차원 배열의 크기)만큼 움직임 - rear가 1칸 움직임
	Q[rear] = data;

	return 1;
}

int dequeue() {
	if (front == rear) {
		printf("Error \n");
		return 0;
	}
	front=(front+1)%N;
	//데이터 삭제 시 (front+1)%(일차원 배열의 크기)만큼 움직임 - front가 1칸 움직임
	return Q[front];
}