#include <stdio.h>
int get_integer();
double get_double();
char get_char();

int main(void) {
	double f, g;
	f = get_double();
	g = get_double();
	printf("�Ǽ��� ��=%lf\n", f + g);
	return 0;
}
int get_integer() {
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	return n;
}
double get_double() {
	double n;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &n);
	return n;
}
char get_char() {
	char n;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s(" %c", &n);
	return n;
}