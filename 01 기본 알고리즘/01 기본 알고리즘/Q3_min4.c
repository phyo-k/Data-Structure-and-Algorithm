//Q3. �� ���� �ּڰ��� ���ϴ� �Լ� min4�� �ۼ��ϼ���.
//int min4(int a, int b, int c, int d);

#include <stdio.h>

int min3(int a, int b, int c, int d) {
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;

	return min;              //��ȯ���� ������ �Լ� ȣ�� �� ���� ����
}

int main(void) {
	int a, b, c, d;

	printf("�� ������ �ּڰ��� ���մϴ�.\n");
	printf("a : "); scanf_s("%d", &a);
	printf("b : "); scanf_s("%d", &b);
	printf("c : "); scanf_s("%d", &c);
	printf("d : "); scanf_s("%d", &d);
	printf("�ּڰ��� %d�Դϴ�.\n", min4(a, b, c, d));

	return 0;
}