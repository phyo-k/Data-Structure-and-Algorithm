//Q18. 아래를 향한 n단의 숫자 피라미드를 출력하는 함수를 작성하세요.
// void nrpira (int n);

#include <stdio.h>

void nrpira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i - 1; j++)
			putchar(' ');
		for (int j = 1; j <= (n - i) * 2 + 1; j++)
			printf("%d", i % 10);
		putchar('\n');
	}
}

int main(void) {
	int n;

	puts("아래를 향한 숫자 피라미드를 출력합니다.");

	do {
		printf("몇 단입니까? : ");
		scanf_s("%d", &n);
	} while (n <= 0);
	putchar('\n');

	nrpira(n);

	return 0;
}