//Q14. �Է��� ���� �� ������ �ϴ� ���簢���� *��ȣ�� ����ϴ� ���α׷��� �ۼ��ϼ���.

#include <stdio.h>

int main (void) {
	int side;

	puts("�簢���� ����մϴ�.");

	//-- �߰� �κ�
	do {
		printf("�Է��� �� : ");
		scanf_s("%d", &side);
	} while (side <= 0);
	//

	for (int i = 1; i <= side; i++) {
		for (int j = 1; j <= side; j++)
			printf("*");  //putchar('*'); -> putchar()�� ���� ���� �Լ�, ��� �� ���ڿ��� ' '�̿�, 'abc'�� ���� ���ڿ��� ��� �ȵȴ�.
		printf("\n");  //putchar('\n');
	}

	return 0;
}