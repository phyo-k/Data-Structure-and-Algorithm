//Q17. n단의 피라미드를 출력하는 함수를 작성하세요.
// void spira (int n);

#include <stdio.h>

void spira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i; j++)
			putchar(' ');
		for (int j = 1; j <= (i - 1) * 2 + 1; j++)
			putchar('*');
		putchar('\n');
	}
}

int main(void) {
	int n;

	puts("피라미드를 출력합니다.");

	do {
		printf("몇 단입니까? : ");
		scanf_s("%d", &n);
	} while (n <= 0);
	putchar('\n');

	spira(n);

	return 0;
}