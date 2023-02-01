#include <stdio.h>
#include <stdlib.h>

typedef struct movie {
	char title[100];
	double rating;
} MOVIE;

int main(void){

	MOVIE* movies;
	int size, i;

	printf("몇 편이나 저장하시겠습니까? ");
	scanf_s("%d", &size);
	getchar();

	movies = (MOVIE*)malloc(sizeof(MOVIE) * size);
	if (movies == NULL) {
		printf("동적 메모리 할당 오류");
		exit(1);
	}

	for (i = 0; i < size; i++) {
		printf("영화 제목: ");
		gets_s(movies[i].title, 100);
		printf("영화 평점: ");
		scanf_s("%lf", &(movies[i].rating));
		getchar();
	}
	printf("========================\n");
	printf("제목      평점\n");
	printf("========================\n");
	for (i = 0; i < size; i++)
		printf("%s \t %f", movies[i].title, movies[i].rating);
	printf("\n========================\n");
	free(movies);
	return 0;
}