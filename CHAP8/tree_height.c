#include <math.h>
#include <stdio.h>

int main(void) {
	double height, distance, tree_height, degrees, radians;

	printf("�������� ����(������ ����): ");
	scanf_s("%lf", &distance);

	printf("�������� Ű(������ ����): ");
	scanf_s("%lf", &height);

	printf("����(������ ��): ");
	scanf_s("%lf", &degrees);

	radians = degrees * (3.141592 / 180.0);
	tree_height = tan(radians) * distance + height;
	printf("������ ����(������ ����): %lf \n", tree_height);

	return 0;
}