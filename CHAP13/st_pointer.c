#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

struct student {
	int number;
	char name[20];
	double grade;
	struct date *dob;
}; 

int main(void)
{
	struct date d = { 12, 13, 2003 };
	struct student s = { 2022211736, "Gil", 3.53 };

	s.dob = &d;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);
	printf("생년월일: %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}