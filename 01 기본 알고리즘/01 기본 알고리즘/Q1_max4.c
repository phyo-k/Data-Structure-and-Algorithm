//Q1. �� ���� �ִ��� ���ϴ� �Լ� max4�� �ۼ��ϼ���.
//int max4(int a, int b, int c, int d);

#include <stdio.h>

int max4(int a, int b, int c, int d) {
	int max = a;

	if (b > max) max = b;
	if (c > max) max = c;    //else if�� �ƴ� ����: ��� �� �ؾ� �ϱ� ����
	if (d > max) max = d;

	return max;              //��ȯ���� ������ �Լ� ȣ�� �� ���� ����
}

int main(void) {
	int a, b, c, d;

	printf("�� ������ �ִ��� ���մϴ�.\n");
	printf("a : "); scanf_s("%d", &a);
	printf("b : "); scanf_s("%d", &b);
	printf("c : "); scanf_s("%d", &c);
	printf("d : "); scanf_s("%d", &d);

	printf("�ִ��� %d�Դϴ�.\n", max4(a, b, c, d));

	return 0;
}