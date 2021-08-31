/* Q13 날짜를 나타내는 구조체를 이용하여 다음의 함수를 작성하세요. */
/*
typedef struct {
	int y;
	int m;
	int d;
} Date;
*/
/* 1. y년 m월 d일을 나타내는 구조체를 반환하는 함수
	Date DateOf(int y, int m, int d); 
   2. 날짜 x의 n일 뒤의 날짜를 반환하는 함수
	Date After(Date x, int n);
   3. 날짜 x의 n일 앞의 날짜를 반환하는 함수
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

	printf("년 : ");  scanf_s("%d", &year);
	printf("월 : ");  scanf_s("%d", &month);
	printf("일 : ");  scanf_s("%d", &day);

	d = DateOf(year, month, day);

	printf("며칠 앞 / 뒤의 날짜를 구할까요? : ");
	scanf("%d", &n);

	printf("%d 일 뒤의 날짜 : ", n); Print(After(d, n)); putchar('\n');
	printf("%d 일 앞의 날짜 : ", n); Print(Before(d, n)); putchar('\n');

	return 0;
}