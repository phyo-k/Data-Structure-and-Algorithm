//Q15. �Է��� ���̿� �ʺ� �´� ���簢���� *��ȣ�� ����ϴ� ���α׷��� �ۼ��ϼ���.

#include <stdio.h>

int main(void) {
	int width, height;

	puts("���簢���� ����մϴ�.");

	do {
		printf("���� : ");
		scanf_s("%d", &height);
	} while (height <= 0);
	
	do {
		printf("�ʺ� : ");
		scanf_s("%d", &width);
	} while (width <= 0);

	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}