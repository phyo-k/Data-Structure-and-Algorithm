/* Q1 키의 최솟값을 구하는 프로그램을 작성하세요. 최솟값을 구하는 과정은 아래와 같은 함수로 구현하세요.*/
/* int minof(const int a[], int n); */

#include <stdio.h>
#include <stdlib.h>

int minof(const int a[], int n) {
	int i;
	int min = a[0];

	for (i = 1; i < n; i++)
		if (a[i] < min) min = a[i];

	return min;
}

int main (void) {
	int i;
	int* height;
	int number;
	
	printf("사람 수 : ");  scanf_s("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d 사람의 키를 입력하세요.\n", number);

	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", &height[i]);
	}

	printf("최솟값은 %d입니다.\n", minof(height, number));
	free(height);

	return 0;
}