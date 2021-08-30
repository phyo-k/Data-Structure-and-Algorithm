/* Q2 Ű�� �հ踦 ���ϴ� ���α׷��� �ۼ��ϼ���. �հ踦 ���ϴ� ������ �Ʒ��� ���� �Լ��� �����ϼ���.*/
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

	printf("��� �� : ");  scanf_s("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d ����� Ű�� �Է��ϼ���.\n", number);

	if (height == NULL)
		puts("�޸� �Ҵ翡 �����߽��ϴ�.");
	else {
		for (i = 0; i < number; i++) {
			printf("height[%d] : ", i);
			scanf_s("%d", &height[i]);
		}
	}

	printf("Ű�� �հ��� %d�Դϴ�.\n", sumof(height, number));
	free(height);

	return 0;
}