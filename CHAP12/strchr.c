#include <string.h>
#include <stdio.h>
int main(void) {
	char s[] = "language";
	char c = 'g';
	char* p;
	int loc;

	p = strchr(s, c);
	loc = (int)(p - s);
	if (p != NULL)
		printf("%s에서 첫번째 %c가 %d에서 발견되었음\n", s, c, loc);
	else
		printf("%crk 발견되지 않았음\n", c);
	return 0;
}