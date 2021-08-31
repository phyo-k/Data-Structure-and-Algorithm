/* Q8 �迭 b�� ��� ��Ҹ� �迭 a�� �����ϴ� �Լ��� �ۼ��ϼ���(n�� ��� �����Դϴ�). */
/* void ary_copy (int a[], const int b[], int n); */

#include <stdio.h>
#include <stdlib.h>

void ary_copy(int a[], const int b[], int n) {
	int i;

	for (i = 0; i < n; i++)
		a[i] = b[i];
}

int main(void) {
	int i;
	int* a, * b;
	int n;

	printf("��ڼ� : ");
	scanf_s("%d", &n);
	a = calloc(n, sizeof(int));
	b = calloc(n, sizeof(int));	
		
	if (a == NULL)
		puts("�޸� �Ҵ翡 �����߽��ϴ�.");
	else {
		for (i = 0; i < n; i++) {
			printf("a[%d] : ", i);
			scanf_s("%d", &a[i]);
		}
	}

	if (b == NULL)
		puts("�޸� �Ҵ翡 �����߽��ϴ�.");
	else {
		ary_copy(b, a, n);
		printf("�迭 x�� ��� ��Ҹ� �迭 y�� �����߽��ϴ�.\n");
	}

	for (i = 0; i < n; i++)
		printf("b[%d] = %d\n", i, b[i]);

	free(a);
	free(b);

	return 0;
}