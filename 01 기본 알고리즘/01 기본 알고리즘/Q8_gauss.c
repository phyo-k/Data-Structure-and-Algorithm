//Q8. ���콺�� ���� ����� �̿��Ͽ� 1���� n������ ���� ���� ���ϴ� ���α׷��� �ۼ��ϼ���.

#include <stdio.h>

int main(void) {
	int n, gauss_sum;

	puts("1���� n������ ���� ���콺�� ���� ����� �̿��Ͽ� ���մϴ�.");
	printf("n �� : ");
	scanf_s("%d", &n);

	if (n % 2 == 0)
		gauss_sum = (1 + n) * (n / 2);
	else
		gauss_sum = (1 + n) * (n / 2) + (n / 2 + 1);
	
	//gauss_sum = (1 + n) * (n / 2) + (n % 2 == 0 ? 0 : (1 + n) / 2);

	printf("1���� %d���� ���� %d�Դϴ�.\n", n, gauss_sum);

	return 0;
}