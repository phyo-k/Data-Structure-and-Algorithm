//Q17. n���� �Ƕ�̵带 ����ϴ� �Լ��� �ۼ��ϼ���.
// void spira (int n);

#include <stdio.h>

void spira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i; j++)
			putchar(' ');
		for (int j = 1; j <= (i - 1) * 2 + 1; j++)
			putchar('*');
		putchar('\n');
	}
}

int main(void) {
	int n;

	puts("�Ƕ�̵带 ����մϴ�.");

	do {
		printf("�� ���Դϱ�? : ");
		scanf_s("%d", &n);
	} while (n <= 0);
	putchar('\n');

	spira(n);

	return 0;
}