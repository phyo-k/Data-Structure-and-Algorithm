/* Q5 배열 요소를 역순으로 정렬하는 과정을 일일이 출력하는 프로그램을 작성하세요. */
/* ary_reverse 함수를 수정하세요. */

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{type t=x; x=y; y=t;} while(0);

void ary_reverse(int a[], int n) {
	int i;

	for (i = 0; i < n / 2; i++) {
		printf("a[%d]과 a[%d]를 교환합니다.\n", i, n - i - 1);
		swap(int, a[i], a[n - i - 1]);

		for (int j = 0; j < n; j++)
			printf("%d ", a[j]);
		printf("\n");
	}

	printf("역순 정렬을 종료합니다.\n");
}

int main(void) {
	int i;
	int* x;
	int nx;

	printf("요소 개수 : ");  scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d개의 정수를 입력하세요.\n", nx);

	if (x == NULL)
		puts("메모리 할당에 실패했습니다.");
	else {
		for (i = 0; i < nx; i++) {
			//printf("x[%d] : ", i);
			scanf_s("%d", &x[i]);
		}
	}

	ary_reverse(x, nx);

	free(x);

	return 0;
}