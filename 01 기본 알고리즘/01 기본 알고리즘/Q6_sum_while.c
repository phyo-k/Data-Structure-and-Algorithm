//Q6. while���� ����� �� ���� i���� n+1�� ���� Ȯ���ϼ���

#include <stdio.h>

int main(void) {
	int i, n;
	int sum;

	puts("1���� n������ ���� ���մϴ�."); //int puts(const char* str) : char* Ÿ���� ���ڿ� �ּҰ����� ���� ���ڿ��� ���� ���� ������ ���ڸ� ǥ����¿� ����ϴٰ� �� ����� �Ŀ��� ����(\n)���� �����ش�.
	printf("n�� �� : ");
	scanf_s("%d", &n);

	sum = 0;
	i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

	if (i == (n + 1))
		printf("���� i�� ���� %d�Դϴ�.", i);

	return 0;
}