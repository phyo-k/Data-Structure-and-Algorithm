//Q6. while문이 종료될 때 변수 i값이 n+1이 됨을 확인하세요

#include <stdio.h>

int main(void) {
	int i, n;
	int sum;

	puts("1부터 n까지의 합을 구합니다."); //int puts(const char* str) : char* 타입의 문자열 주소값으로 가서 문자열의 끝이 나올 때까지 문자를 표준출력에 출력하다가 다 출력한 후에는 개행(\n)까지 보내준다.
	printf("n의 값 : ");
	scanf_s("%d", &n);

	sum = 0;
	i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	if (i == (n + 1))
		printf("변수 i의 값은 %d입니다.", i);

	return 0;
}