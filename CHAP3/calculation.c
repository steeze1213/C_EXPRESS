#include <stdio.h>
int main(void) {
	int x;
	int y;
	int sum, diff, mul, div;

	x = 20;
	y = 10;

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("두수의 합: %d", sum);
	printf("두수의 차: %d", diff);
	printf("두수의 곱: %d", mul);
	printf("두수의 몫: %d", div);

	return 0;
}