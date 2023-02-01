#include <stdio.h>
#include <stdlib.h>

typedef struct movie {
	char title[100];
	double rating;
} MOVIE;

int main(void){

	MOVIE* movies;
	int size, i;

	printf("�� ���̳� �����Ͻðڽ��ϱ�? ");
	scanf_s("%d", &size);
	getchar();

	movies = (MOVIE*)malloc(sizeof(MOVIE) * size);
	if (movies == NULL) {
		printf("���� �޸� �Ҵ� ����");
		exit(1);
	}

	for (i = 0; i < size; i++) {
		printf("��ȭ ����: ");
		gets_s(movies[i].title, 100);
		printf("��ȭ ����: ");
		scanf_s("%lf", &(movies[i].rating));
		getchar();
	}
	printf("========================\n");
	printf("����      ����\n");
	printf("========================\n");
	for (i = 0; i < size; i++)
		printf("%s \t %f", movies[i].title, movies[i].rating);
	printf("\n========================\n");
	free(movies);
	return 0;
}