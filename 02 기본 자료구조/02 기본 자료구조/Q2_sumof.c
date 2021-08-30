/* Q2 키의 합계를 구하는 프로그램을 작성하세요. 합계를 구하는 과정은 아래와 같은 함수로 구현하세요.*/
/* int sumof(const int a[], int n); */

#include <stdio.h>
#include <stdlib.h>

int sumof(const int a[], int n) {
	int sum = 0, i;

	for (i = 0; i < n; i++)
		sum += a[i];

	return sum;
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

	printf("키의 합계은 %d입니다.\n", sumof(height, number));
	free(height);

	return 0;
}