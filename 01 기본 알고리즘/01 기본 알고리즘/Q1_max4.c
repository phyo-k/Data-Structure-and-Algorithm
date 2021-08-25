//Q1. 네 값의 최댓값을 구하는 함수 max4를 작성하세요.
//int max4(int a, int b, int c, int d);

#include <stdio.h>

int max4(int a, int b, int c, int d) {
	int max = a;

	if (b > max) max = b;
	if (c > max) max = c;    //else if가 아닌 이유: 모두 비교 해야 하기 때문
	if (d > max) max = d;

	return max;              //반환값이 없으면 함수 호출 시 값이 없음
}

int main(void) {
	int a, b, c, d;

	printf("네 정수의 최댓값을 구합니다.\n");
	printf("a : "); scanf_s("%d", &a);
	printf("b : "); scanf_s("%d", &b);
	printf("c : "); scanf_s("%d", &c);
	printf("d : "); scanf_s("%d", &d);

	printf("최댓값은 %d입니다.\n", max4(a, b, c, d));

	return 0;
}