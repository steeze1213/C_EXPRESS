#include <stdio.h>

int main(void) {
	int i = 0;
	do {
		printf("1---���θ����\n");
		printf("2---���Ͽ���\n");
		printf("3---���ϴݱ�\n");
		printf("�ϳ��� �����Ͻÿ�: ");
		scanf_s("%d", &i);
	} while (i < 1 || i > 3);

	printf("���õ� �޴�=%d \n", i);
	return 0;
}