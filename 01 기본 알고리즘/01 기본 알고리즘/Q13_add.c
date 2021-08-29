//Q13. Q12를 이용하여 덧셈을 출력하는 프로그램을 작성하세요.
//구분선은 수직선 기호'|', 마이너스 기호'-', 플러스 기호'+'를 사용하세요.

#include <stdio.h>

int main(void) {
	int i, j, k;

	printf("   |");

	for (i = 1; i < 10; i++)
		printf("%3d", i);

	printf("\n---+---------------------------\n");

	for (j = 1; j < 10; j++) {
		printf("%2d |", j);
		for (k = 1; k < 10; k++)
			printf("%3d", j + k);
		printf("\n");
	}

	return 0;
}