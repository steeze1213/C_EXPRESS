#include <string.h>
#include <stdio.h>
int main(void) {
	char string[80];

	strcpy_s(string, 80, "Hello world from ");
	strcat_s(string, 80, "strcpy");
	strcat_s(string, 80, "and ");
	strcat_s(string, 80, "strcat!");
	printf("string = %s\n", string);
	return 0;
}