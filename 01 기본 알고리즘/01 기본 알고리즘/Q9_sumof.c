//Q9. ���� a, b�� �����Ͽ� �� ������ ��� ������ ���� ���ϴ� �Ʒ� �Լ��� �ۼ��Ͻÿ�.
//int sumof(int a, int b)

#include <stdio.h>

int sumof(int a, int b) {
	int min, max;
	int sum = 0;

	if (a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}

	for (int i = min; i <= max; i++)
		sum += i;

	return sum;
}

int main(void) {
	int a, b, sum;

	puts("a���� b������ ���� ���մϴ�.");
	printf("a �� : ");  scanf_s("%d", &a);
	printf("b �� : ");  scanf_s("%d", &b);

	printf("%d���� %d���� ���� %d�Դϴ�.\n", a, b, sumof(a, b));

	return 0;
}