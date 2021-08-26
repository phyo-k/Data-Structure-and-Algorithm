//Q7. n이 7이면 '1 + 2 + 3 + 4 + 5 + 6 + 7 = 28'로 출력하는 프로그램을 작성하세요. for문을 이용하세요.

#include <stdio.h>

int main(void) {
	int i, n;
	int sum;

	puts("1부터 n까지의 합을 구합니다.");
	printf("n 값 : ");
	scanf_s("%d", &n);

	sum = 0;
	for (i = 1; i <= n; i++) {
		sum += i;
		if (i == n)
			printf("%d ", i);
		else printf("%d + ", i);
	}
	printf("= %d\n", sum);

	return 0;
}