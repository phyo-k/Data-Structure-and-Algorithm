//Q8. 가우스의 덧셈 방법을 이용하여 1부터 n까지의 정수 합을 구하는 프로그램을 작성하세요.

#include <stdio.h>

int main(void) {
	int n, gauss_sum;

	puts("1부터 n까지의 합을 가우스의 덧셈 방법을 이용하여 구합니다.");
	printf("n 값 : ");
	scanf_s("%d", &n);

	if (n % 2 == 0)
		gauss_sum = (1 + n) * (n / 2);
	else
		gauss_sum = (1 + n) * (n / 2) + (n / 2 + 1);
	
	//gauss_sum = (1 + n) * (n / 2) + (n % 2 == 0 ? 0 : (1 + n) / 2);

	printf("1부터 %d까지 합은 %d입니다.\n", n, gauss_sum);

	return 0;
}