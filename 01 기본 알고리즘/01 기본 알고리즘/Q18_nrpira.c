//Q18. �Ʒ��� ���� n���� ���� �Ƕ�̵带 ����ϴ� �Լ��� �ۼ��ϼ���.
// void nrpira (int n);

#include <stdio.h>

void nrpira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i - 1; j++)
			putchar(' ');
		for (int j = 1; j <= (n - i) * 2 + 1; j++)
			printf("%d", i % 10);
		putchar('\n');
	}
}

int main(void) {
	int n;

	puts("�Ʒ��� ���� ���� �Ƕ�̵带 ����մϴ�.");

	do {
		printf("�� ���Դϱ�? : ");
		scanf_s("%d", &n);
	} while (n <= 0);
	putchar('\n');

	nrpira(n);

	return 0;
}