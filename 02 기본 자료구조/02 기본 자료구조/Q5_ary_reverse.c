/* Q5 �迭 ��Ҹ� �������� �����ϴ� ������ ������ ����ϴ� ���α׷��� �ۼ��ϼ���. */
/* ary_reverse �Լ��� �����ϼ���. */

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{type t=x; x=y; y=t;} while(0);

void ary_reverse(int a[], int n) {
	int i;

	for (i = 0; i < n / 2; i++) {
		printf("a[%d]�� a[%d]�� ��ȯ�մϴ�.\n", i, n - i - 1);
		swap(int, a[i], a[n - i - 1]);

		for (int j = 0; j < n; j++)
			printf("%d ", a[j]);
		printf("\n");
	}

	printf("���� ������ �����մϴ�.\n");
}

int main(void) {
	int i;
	int* x;
	int nx;

	printf("��� ���� : ");  scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d���� ������ �Է��ϼ���.\n", nx);

	if (x == NULL)
		puts("�޸� �Ҵ翡 �����߽��ϴ�.");
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