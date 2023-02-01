#include <string.h>
#include <stdio.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char *token;

int main(void) {
	token = strtok_s(s," ", &seps);

	while (token != NULL) {
		printf("ÅäÅ«: %s\n", token);
		token = strtok_s(NULL, " ", &seps);
	}
	return 0;
}