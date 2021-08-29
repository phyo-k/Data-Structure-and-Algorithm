//Q16. ���� �̵ �ﰢ���� ����ϴ� �κ��� �Ʒ��� ���� ������ �Լ��� �ۼ��ϼ���.
// void triangleLB (int n);
//���� �Ʒ��� ������ �̵ �ﰢ���� ���

#include <stdio.h>

/* ���� �Ʒ��� ������ �̵ �ﰢ�� */
void triangleLB(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
}

/* ���� ���� ������ �̵ �ﰢ�� */
void triangleLU(int n) {
	for (int i = n; i >= 1; i--) {
		for (int j = i; j >= 1; j--)
			putchar('*');
		putchar('\n');
	}
}

/* ������ ���� ������ �̵ �ﰢ�� */
void triangleRU(int n) {
	for (int i = 1; i <= n ; i++) {
		for (int j = 1; j <= i - 1; j++)
			putchar(' ');
		for (int j = 1; j <= n-i+1; j++)
			putchar('*');
		putchar('\n');
	}
}

/* ������ �Ʒ��� ������ �̵ �ﰢ�� */
void triangleRB(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)
			putchar(' ');
		for (int j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
}

int main(void) {
	int n;

	puts("���� �̵ �ﰢ���� ����մϴ�.");

	do {
		printf("�� �� �ﰢ���Դϱ�? : ");
		scanf_s("%d", &n);
	} while (n <= 0);
	putchar('\n');

	puts("���� �Ʒ��� ������ �̵ �ﰢ���� ����մϴ�.");
	triangleLB(n);
	putchar('\n');
	puts("���� ���� ������ �̵ �ﰢ���� ����մϴ�.");
	triangleLU(n);
	putchar('\n');
	puts("������ ���� ������ �̵ �ﰢ���� ����մϴ�.");
	triangleRU(n);
	putchar('\n');
	puts("������ �Ʒ��� ������ �̵ �ﰢ���� ����մϴ�.");
	triangleRB(n);

	return 0;
}