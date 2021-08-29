//Q16. 직각 이등변 삼각형을 출력하는 부분을 아래와 같은 형식의 함수로 작성하세요.
// void triangleLB (int n);
//왼쪽 아래가 직각인 이등변 삼각형을 출력

#include <stdio.h>

/* 왼쪽 아래가 직각인 이등변 삼각형 */
void triangleLB(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
}

/* 왼쪽 위가 직각인 이등변 삼각형 */
void triangleLU(int n) {
	for (int i = n; i >= 1; i--) {
		for (int j = i; j >= 1; j--)
			putchar('*');
		putchar('\n');
	}
}

/* 오른쪽 위가 직각인 이등변 삼각형 */
void triangleRU(int n) {
	for (int i = 1; i <= n ; i++) {
		for (int j = 1; j <= i - 1; j++)
			putchar(' ');
		for (int j = 1; j <= n-i+1; j++)
			putchar('*');
		putchar('\n');
	}
}

/* 오른쪽 아래가 직각인 이등변 삼각형 */
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

	puts("직각 이등변 삼각형을 출력합니다.");

	do {
		printf("몇 단 삼각형입니까? : ");
		scanf_s("%d", &n);
	} while (n <= 0);
	putchar('\n');

	puts("왼쪽 아래가 직각인 이등변 삼각형을 출력합니다.");
	triangleLB(n);
	putchar('\n');
	puts("왼쪽 위가 직각인 이등변 삼각형을 출력합니다.");
	triangleLU(n);
	putchar('\n');
	puts("오른쪽 위가 직각인 이등변 삼각형을 출력합니다.");
	triangleRU(n);
	putchar('\n');
	puts("오른쪽 아래가 직각인 이등변 삼각형을 출력합니다.");
	triangleRB(n);

	return 0;
}