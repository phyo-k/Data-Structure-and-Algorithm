//Q7. n�� 7�̸� '1 + 2 + 3 + 4 + 5 + 6 + 7 = 28'�� ����ϴ� ���α׷��� �ۼ��ϼ���. for���� �̿��ϼ���.

#include <stdio.h>

int main(void) {
	int i, n;
	int sum;

	puts("1���� n������ ���� ���մϴ�.");
	printf("n �� : ");
	scanf_s("%d", &n);

	sum = 0;
	for (i = 1; i <= n; i++) {
		sum += i;
		if (i == n)
			printf("%d ", i);
		else printf("%d + ", i);
	}
	printf("= %d\n", sum);

	return 0;
}