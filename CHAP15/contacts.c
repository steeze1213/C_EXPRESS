#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

typedef struct person {
	char name[SIZE];
	char address[SIZE];
	char mobilephone[SIZE];
	char desc[SIZE];
} PERSON;

void menu();
PERSON get_record();
void print_record(PERSON data);
void add_record(FILE* fp);
void search_record(FILE* fp);
void update_record(FILE* fp);

int main(void){
	FILE* fp;
	int select;
	if ((fp = fopen("address.dat", "a+")) == NULL) {
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다");
		exit(1);
	}
	while (1) {
		menu();
		printf("정수값을 입력하시오: ");
		scanf("%d", &select);
		switch (select) {
		case 1:	add_record(fp); break;
		case 2:	update_record(fp); break;
		case 3:	search_record(fp); break;
		case 4:	return 0;
		}
	}
	fclose(fp);
	return 0;
}

PERSON get_record(){
	PERSON data;
	
	getchar();
	printf("이름: "); 	gets_s(data.name, SIZE);
	printf("주소: ");	gets_s(data.address, SIZE);
	printf("휴대폰: ");	gets_s(data.mobilephone, SIZE);
	printf("특징: ");	gets_s(data.desc, SIZE);
	return data;
}

void print_record(PERSON data){
	printf("이름: %s \n", data.name);		printf("주소: %s\n", data.address);
	printf("휴대폰: %s\n", data.mobilephone);	printf("특징: %s\n", data.desc);
}

void menu(){
	printf("====================\n");
	printf(" 1. 추가\n 2. 수정\n 3. 검색\n 4. 종료\n");
	printf("====================\n");
}

void add_record(FILE* fp){
	PERSON data;
	data = get_record();
	fseek(fp, 0, SEEK_END);
	fwrite(&data, sizeof(data), 1, fp);
}

void search_record(FILE* fp){
	char name[SIZE];
	PERSON data;

	fseek(fp, 0, SEEK_SET);
	getchar();
	printf("탐색하고자 하는 사람의 이름: ");
	gets_s(name, SIZE);
	while (!feof(fp)) {
		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.name, name) == 0) {
			print_record(data);
			break;
		}
	}
}
void update_record(FILE* fp){}