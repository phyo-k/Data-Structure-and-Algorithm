//Q10. �����ʰ� ���� �� ���� a, b�� ������ �Է��ϰ� b-a�� ����ϴ� ���α׷��� �ۼ��ϼ���.
//��, ���� b�� �Է��� ���� a �����̸� ���� b�� ���� �ٽ� �Է��ϼ���.

#include <stdio.h>

int main(void) {
	int a, b, sub;

	printf("a �� : ");  scanf_s("%d", &a);

	while (1) {
		printf("b �� : ");  scanf_s("%d", &b);

		if (b > a)  break;
		puts("a���� ū ���� �Է��ϼ���!");
	}

	sub = b - a;
	printf("b - a�� %d�Դϴ�.\n", sub);

	return 0;
}