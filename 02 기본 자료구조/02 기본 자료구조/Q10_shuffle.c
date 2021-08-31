/* Q10 배열 a의 모든 요소의 순서를 뒤섞는 shuffle 함수를 작성하세요(n은 요소 개수입니다). */
/* void shuffle (int a[], int n); */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{type t=x; x=y; y=t;} while(0);

void shuffle(int a[], int n) {
	int i;

	srand(time(NULL));
	for (i = 0; i < n; i++) {
		int j = rand() % (n);
			if (i != j)
		swap(int, a[i], a[j]);
	}
}

int main(void) {
	int i;
	int* a, * b;
	int n;

	printf("요솟수 : ");
	scanf_s("%d", &n);
	a = calloc(n, sizeof(int));

	if (a == NULL)
		puts("메모리 할당에 실패했습니다.");
	else {
		for (i = 0; i < n; i++) {
			printf("a[%d] : ", i);
			scanf_s("%d", &a[i]);
		}
	}
		shuffle(a, n);
		puts("배열 a의 모든 요소를 뒤섞었습니다.");

	for (i = 0; i < n; i++)
		printf("a[%d] = %d\n", i, a[i]);

	free(a);

	return 0;
}