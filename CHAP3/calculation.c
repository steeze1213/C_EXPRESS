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

	printf("�μ��� ��: %d", sum);
	printf("�μ��� ��: %d", diff);
	printf("�μ��� ��: %d", mul);
	printf("�μ��� ��: %d", div);

	return 0;
}