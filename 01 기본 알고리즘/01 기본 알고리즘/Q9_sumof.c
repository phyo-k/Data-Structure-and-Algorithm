//Q9. 정수 a, b를 포함하여 그 사이의 모든 정수의 합을 구하는 아래 함수를 작성하시오.
//int sumof(int a, int b)

#include <stdio.h>

int sumof(int a, int b) {
	int min, max;
	int sum = 0;

	if (a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}

	for (int i = min; i <= max; i++)
		sum += i;

	return sum;
}

int main(void) {
	int a, b, sum;

	puts("a부터 b까지의 합을 구합니다.");
	printf("a 값 : ");  scanf_s("%d", &a);
	printf("b 값 : ");  scanf_s("%d", &b);

	printf("%d부터 %d까지 합은 %d입니다.\n", a, b, sumof(a, b));

	return 0;
}