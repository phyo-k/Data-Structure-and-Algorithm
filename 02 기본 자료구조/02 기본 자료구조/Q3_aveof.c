/* Q3 Ű�� ����� ���ϴ� ���α׷��� �ۼ��ϼ���. */
/* ������ �ƴ� �Ǽ������� ��հ��� ���մϴ�. �Ʒ��� �Լ��� �����ϼ���. */
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

	printf("Ű�� ����� %f�Դϴ�.\n", aveof(height, number));
	free(height);

	return 0;
}