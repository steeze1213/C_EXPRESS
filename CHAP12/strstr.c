#include <string.h>
#include <stdio.h>

int main(void) {
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "joy";
	char* p;
	int loc;
	p = strstr(s, sub);

	loc = (int)(p - s);
	if (p != NULL)
		printf("%s���� ù��° %s�� %d���� �߰ߵǾ���\n", s, sub, loc);
	else
		printf("%s�� �߰ߵ��� �ʾ���\n", sub);
	return 0;
}