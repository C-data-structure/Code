#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int front = 0;
int rear = 0;
int size;

void printq(int* queue, int size) {
	for (int i = 0; i < size; i++) {
		printf(" %d", queue[i]);
	}
	printf("\n");
}

void enqueue(int* queue, int data, int size) {
	if ((rear+1)%size==front) {
		printf("overflow");
		printq(queue, size);
		return 1;
	}
	rear = (rear + 1) % size;
	queue[rear] = data;
}

int dequeue(int* queue, int size) {
	if (front == rear) {
		printf("underflow \n");
		return -1;
	}
	front = (front + 1) % size;
	queue[front] = 0;

	return queue[front];
}

int main() {
	int size;
	int n;
	int data;
	char tmp;

	scanf("%d", &size);
	scanf("%d", &n);
	getchar();

	int *queue = (int*)malloc(size*sizeof(int));
	memset(queue, 0, size*sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%c", &tmp);
		getchar();
		
		if (tmp == 'I') {
			scanf("%d", &data);
			getchar();
			enqueue(queue, data, size);
		}
		else if (tmp == 'D') {
			dequeue(queue, size);
		}
		else if (tmp == 'P') {
			printq(queue, size);
		}
	}
}