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
		printf("%s���� ù��° %c�� %d���� �߰ߵǾ���\n", s, c, loc);
	else
		printf("%crk �߰ߵ��� �ʾ���\n", c);
	return 0;
}