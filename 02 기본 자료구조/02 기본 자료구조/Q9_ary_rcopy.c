/* Q9 배열 b의 모든 요소를 배열 a에 역순으로 복사하는 함수를 작성하세요(n은 요소 개수입니다). */
/* void ary_rcopy (int a[], const int b[], int n); */

#include <stdio.h>
#include <stdlib.h>

void ary_rcopy (int a[], const int b[], int n) {
	int i;

	for (i = 0; i < n; i++)
		a[i] = b[n - i - 1];
}

int main(void) {
	int i;
	int* a, * b;
	int n;

	printf("요솟수 : ");
	scanf_s("%d", &n);
	a = calloc(n, sizeof(int));
	b = calloc(n, sizeof(int));

	if (a == NULL)
		puts("메모리 할당에 실패했습니다.");
	else {
		for (i = 0; i < n; i++) {
			printf("a[%d] : ", i);
			scanf_s("%d", &a[i]);
		}
	}

	if (b == NULL)
		puts("메모리 할당에 실패했습니다.");
	else {
		ary_rcopy(b, a, n);
		printf("배열 x의 모든 요소를 배열 y로 복사했습니다.\n");
	}

	for (i = 0; i < n; i++)
		printf("b[%d] = %d\n", i, b[i]);

	free(a);
	free(b);

	return 0;
}