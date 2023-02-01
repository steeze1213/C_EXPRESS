#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };

char *days_name[] = { 
"sunday", "monday", "tuesday", "wednesday", "thursday", "friday",
	"saturday"};

int main(void)
{
	enum days d;
	d = WED;
	printf("%d번째 요일의 이름은 %s입니다\n", d, days_name[d]);
	return 0;
}