/* Q13 ��¥�� ��Ÿ���� ����ü�� �̿��Ͽ� ������ �Լ��� �ۼ��ϼ���. */
/*
typedef struct {
	int y;
	int m;
	int d;
} Date;
*/
/* 1. y�� m�� d���� ��Ÿ���� ����ü�� ��ȯ�ϴ� �Լ�
	Date DateOf(int y, int m, int d); 
   2. ��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
	Date After(Date x, int n);
   3. ��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
	Date Before(Date x, int n); */

#include <stdio.h>
#define VMAX 21

typedef struct {
	int y;
	int m;
	int d;
} Date;

Date DateOf(int y, int m, int d) {
	Date date;

	date.y = y;
	date.m = m;
	date.d = d;

	return date;
}

Date After(Date x, int n) {
	
}

Date Before(Date x, int n) {

}

int main(void) {
	int n, year, month, day;
	Date d;

	printf("�� : ");  scanf_s("%d", &year);
	printf("�� : ");  scanf_s("%d", &month);
	printf("�� : ");  scanf_s("%d", &day);

	d = DateOf(year, month, day);

	printf("��ĥ �� / ���� ��¥�� ���ұ��? : ");
	scanf("%d", &n);

	printf("%d �� ���� ��¥ : ", n); Print(After(d, n)); putchar('\n');
	printf("%d �� ���� ��¥ : ", n); Print(Before(d, n)); putchar('\n');

	return 0;
}