#include <stdio.h>
int main(void) {
	int grade, n;
	double sum, average;

	n = 0;
	sum = 0;
	grade = 0;

	printf("�����Ϸ��� ������ �Է��Ͻÿ�\n");
	
	while (grade >= 0) {
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &grade);

		sum += grade;
		n++;
	}
	sum = sum - grade;
	n--;
	average = sum / n;
	printf("������ ����� %f�Դϴ�.\n", average);

	return 0;
}