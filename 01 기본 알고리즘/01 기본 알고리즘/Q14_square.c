//Q14. 입력한 수를 한 변으로 하는 정사각형을 *기호로 출력하는 프로그램을 작성하세요.

#include <stdio.h>

int main (void) {
	int side;

	puts("사각형을 출력합니다.");

	//-- 추가 부분
	do {
		printf("입력할 수 : ");
		scanf_s("%d", &side);
	} while (side <= 0);
	//

	for (int i = 1; i <= side; i++) {
		for (int j = 1; j <= side; j++)
			printf("*");  //putchar('*'); -> putchar()는 문자 전용 함수, 사용 시 문자열인 ' '이용, 'abc'와 같이 문자열도 허용 안된다.
		printf("\n");  //putchar('\n');
	}

	return 0;
}