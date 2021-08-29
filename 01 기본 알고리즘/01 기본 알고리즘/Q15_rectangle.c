//Q15. 입력한 높이와 너비에 맞는 직사각형을 *기호로 출력하는 프로그램을 작성하세요.

#include <stdio.h>

int main(void) {
	int width, height;

	puts("직사각형을 출력합니다.");

	do {
		printf("높이 : ");
		scanf_s("%d", &height);
	} while (height <= 0);
	
	do {
		printf("너비 : ");
		scanf_s("%d", &width);
	} while (width <= 0);

	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}