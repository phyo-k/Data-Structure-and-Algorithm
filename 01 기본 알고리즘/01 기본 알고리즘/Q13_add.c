//Q13. Q12�� �̿��Ͽ� ������ ����ϴ� ���α׷��� �ۼ��ϼ���.
//���м��� ������ ��ȣ'|', ���̳ʽ� ��ȣ'-', �÷��� ��ȣ'+'�� ����ϼ���.

#include <stdio.h>

int main(void) {
	int i, j, k;

	printf("   |");

	for (i = 1; i < 10; i++)
		printf("%3d", i);

	printf("\n---+---------------------------\n");

	for (j = 1; j < 10; j++) {
		printf("%2d |", j);
		for (k = 1; k < 10; k++)
			printf("%3d", j + k);
		printf("\n");
	}

	return 0;
}