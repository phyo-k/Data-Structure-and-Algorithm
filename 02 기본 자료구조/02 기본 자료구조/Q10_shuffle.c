/* Q10 �迭 a�� ��� ����� ������ �ڼ��� shuffle �Լ��� �ۼ��ϼ���(n�� ��� �����Դϴ�). */
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

	printf("��ڼ� : ");
	scanf_s("%d", &n);
	a = calloc(n, sizeof(int));

	if (a == NULL)
		puts("�޸� �Ҵ翡 �����߽��ϴ�.");
	else {
		for (i = 0; i < n; i++) {
			printf("a[%d] : ", i);
			scanf_s("%d", &a[i]);
		}
	}
		shuffle(a, n);
		puts("�迭 a�� ��� ��Ҹ� �ڼ������ϴ�.");

	for (i = 0; i < n; i++)
		printf("a[%d] = %d\n", i, a[i]);

	free(a);

	return 0;
}