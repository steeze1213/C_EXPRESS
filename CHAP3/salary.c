#include <stdio.h>
int main(void) {
	int ysalary;
	int msalary;
	printf("연봉을 입력하시오(단위: 만원): ");
	scanf_s("%d", &ysalary);

	msalary = ysalary / 12;

	printf("월수령액(단위: 만원): %d\n", msalary);
	return 0;
}