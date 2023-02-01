#include <stdio.h>
#include <stdlib.h>
int main(void) {
	for (int i = 0; i < 6; i++)
		printf("%d ", 1+(rand()%45));
	printf("\n");
	return 0;
}