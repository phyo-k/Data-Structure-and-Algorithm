//Q2. �� ���� �ּڰ��� ���ϴ� �Լ� min3�� �ۼ��ϼ���.
//int min3(int a, int b, int c);

#include <stdio.h>

int min3(int a, int b, int c) {
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;

	return min;              //��ȯ���� ������ �Լ� ȣ�� �� ���� ����
}

int main(void) {
	int a, b, c;

	printf("�� ������ �ּڰ��� ���մϴ�.\n");
	printf("a : "); scanf_s("%d", &a);
	printf("b : "); scanf_s("%d", &b);
	printf("c : "); scanf_s("%d", &c);
	printf("�ּڰ��� %d�Դϴ�.\n", min3(a, b, c));

	return 0;
}