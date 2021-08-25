//Q3. 네 값의 최솟값을 구하는 함수 min4를 작성하세요.
//int min4(int a, int b, int c, int d);

#include <stdio.h>

int min3(int a, int b, int c, int d) {
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;

	return min;              //반환값이 없으면 함수 호출 시 값이 없음
}

int main(void) {
	int a, b, c, d;

	printf("네 정수의 최솟값을 구합니다.\n");
	printf("a : "); scanf_s("%d", &a);
	printf("b : "); scanf_s("%d", &b);
	printf("c : "); scanf_s("%d", &c);
	printf("d : "); scanf_s("%d", &d);
	printf("최솟값은 %d입니다.\n", min4(a, b, c, d));

	return 0;
}