/* Q4 키와 함께 사람수도 난수로 생성하는 프로그램을 작성하세요. */
/* 사람 수는 5이상 20이하의 난수로 입력하세요. */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n) {
	int i;
	int max = a[0];

	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];

	return max;
}

int main(void) {
	int i;
	int* height;
	int number;

	srand(time(NULL));
	number = 5 + rand() % 16;
	height = calloc(number, sizeof(int));
	
	if (height == NULL)
		puts("메모리 할당에 실패했습니다.");
	else {
		for (i = 0; i < number; i++) {
			height[i] = 100 + rand() % 90;
			printf("height[%d] = %d\n", i, height[i]);
		}
	}

	printf("최댓값은 %d입니다.\n", maxof(height, number));
	free(height);

	return 0;
}