#include <stdio.h>
int main(void) {
	int i, n, sum;

	i = 0;
	sum = 0;
	while (i < 5) {
		printf("���� �Է��Ͻÿ�: ");
		scanf_s("%d", &n);
		sum = sum + n;
		i++;
	}
	printf("�հ�� %d�Դϴ�.\n", sum);

	return 0;
}