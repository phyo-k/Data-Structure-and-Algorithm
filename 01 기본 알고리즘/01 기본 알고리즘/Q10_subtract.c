//Q10. 오른쪽과 같이 두 변수 a, b에 정수를 입력하고 b-a를 출력하는 프로그램을 작성하세요.
//단, 변수 b에 입력한 값이 a 이하이면 변수 b의 값을 다시 입력하세요.

#include <stdio.h>

int main(void) {
	int a, b, sub;

	printf("a 값 : ");  scanf_s("%d", &a);

	while (1) {
		printf("b 값 : ");  scanf_s("%d", &b);

		if (b > a)  break;
		puts("a보다 큰 값을 입력하세요!");
	}

	sub = b - a;
	printf("b - a는 %d입니다.\n", sub);

	return 0;
}