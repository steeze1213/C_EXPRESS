#include <stdio.h>

int main(void) {
	int x, y;
	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf_s("%d%d", &x, &y);

	printf("%d && %d�� �����: %d\n", x, y, x && y);
	printf("%d || %d�� �����: %d\n", x, y, x || y);
	printf("!%d�� �����: %d\n", x, !x);
	return 0;
}