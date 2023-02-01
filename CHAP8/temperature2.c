#include <stdio.h>
void printOptions() {
	printf(" 'c' ¼·¾¾¿Âµµ¿¡¼­ È­¾¾¿Âµµ·Î º¯È¯\n");
	printf(" 'f' È­¾¾¿Âµµ¿¡¼­ ¼·¾¾¿Âµµ·Î º¯È¯\n");
	printf(" 'q' Á¾·á\n");
}
double C2F(double c_temp) {
	return 9.0 / 5.0 * c_temp + 32;
}
double F2C(double f_temp) {
	return (f_temp - 32.0) * 5.0 / 9.0;
}
int main(void) {
	char choice;
	double temp;
	while (1) {
		printOptions();
		printf("¸Þ´º¿¡¼­ ¼±ÅÃÇÏ¼¼¿ä.");
		choice = getchar();
		if (choice == 'q') break;
		else if (choice == 'c') {
			printf("¼·¾¾¿Âµµ: ");
			scanf_s("%lf", &temp);
			printf("È­¾¾¿Âµµ: %lf \n", C2F(temp));
		}
		else if (choice == 'f') {
			printf("È­¾¾¿Âµµ: ");
			scanf_s("%lf", &temp);
			printf("¼·¾¾¿Âµµ: %lf \n", F2C(temp));
		}
		getchar();
	}
	return 0;
}