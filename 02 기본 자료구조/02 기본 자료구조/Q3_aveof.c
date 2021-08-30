/* Q3 키의 평균을 구하는 프로그램을 작성하세요. */
/* 정수가 아닌 실수값으로 평균값을 구합니다. 아래의 함수를 구현하세요. */
/* double aveof(const int a[], int n); */

#include <stdio.h>
#include <stdlib.h>

double aveof(const int a[], int n) {
	int sum = 0, i;

	for (i = 0; i < n; i++)
		sum += a[i];

	return sum/n;
}

int main(void) {
	int i;
	int* height;
	int number;

	printf("사람 수 : ");  scanf_s("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d 사람의 키를 입력하세요.\n", number);

	if (height == NULL)
		puts("메모리 할당에 실패했습니다.");
	else {
		for (i = 0; i < number; i++) {
			printf("height[%d] : ", i);
			scanf_s("%d", &height[i]);
		}
	}

	printf("키의 평균은 %f입니다.\n", aveof(height, number));
	free(height);

	return 0;
}