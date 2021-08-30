/* Q6 card_conv 함수를 수정하여 배열의 맨 앞쪽에 아랫자리가 아니라 윗자리를 저장하는 함수를 작성하세요. */
/* int card_conv(unsigned x, int n, char d[]); */

#include <stdio.h>

#define swap(type, x, y) do{type t=x; x=y; y=t;} while(0);

int card_conv(unsigned x, int n, char d[]) {
	int i;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;

	if (x == 0)
		d[digits++] = dchar[0];
	else
		while (x) {
			printf("%2d | %7d ... %c\n", n, x, dchar[x % n]);
			printf("   + ---------- \n");
			d[digits++] = dchar[x % n];
			x /= n;
		}
	printf("%12d\n", x);

	for (i = 0; i < digits / 2; i++)
		swap(char, d[i], d[digits - i - 1]);

	return digits;
}

int main(void) {
	int i;
	unsigned no;
	int cd = 0;
	int dno;
	char cno[512];
	int retry;

	puts("10진수를 기수 변환합니다.");
	do {
		printf("변환하는 음이 아닌 정수 : ");
		scanf_s("%u", &no);
		do {
			printf("어떤 진수로 변환할까요?(2-36) : ");
			scanf_s("%d", &cd);
		} while (cd < 2 || cd>36);
		dno = card_conv(no, cd, cno);
		printf("%d진수로는", cd);
		for (i = dno - 1; i >= 0; i--)
			printf("%c", cno[i]);
		printf("입니다.\n");
		printf("한 번 더 할까요?{1 ---예/0 --- 아니오) : ");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}