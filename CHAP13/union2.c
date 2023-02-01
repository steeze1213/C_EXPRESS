#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define STU_NUMBER 1
#define REG_NUMBER 2

struct  student {
	int type;
	union {
		int stu_number;
		char reg_number[15];
	} id;
	char name[20];
};

void print(struct student s)
{
	switch(s.type)
	{
		case STU_NUMBER:
			printf("�й�: %d\n", s.id.stu_number);
			printf("�̸�: %s\n", s.name);
			break;
		case REG_NUMBER:
			printf("�ֹε�Ϲ�ȣ: %s\n", s.id.reg_number);
			printf("�̸�: %s\n", s.name);
			break;
		default:
			printf("Ÿ�Կ���\n");
			break;
	}
}

int main(void)
{
	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 2022211736;
	strcpy(s1.name, "�����");

	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number, "123456-1234567");
	strcpy(s2.name, "ȫ�浿");

	print(s1);
	print(s2);

	return 0;		
}
