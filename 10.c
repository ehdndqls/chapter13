#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

struct employee {
	int id;
	char name[20];
	int tel;
	int age;
}typedef EMPLOYEE;

void init_employ(EMPLOYEE* e);

int main() {
	EMPLOYEE list[10];
	int i;
	init_employ(list);

	for (i = 0; i < 10; i++) {
		if (list[i].age >= 20 && list[i].age <= 30)
			printf("���: %d �̸�: %s ��ȭ��ȣ: 010%8d ����: %d\n",list[i].id, list[i].name, list[i].tel, list[i].age);
	}
	return 0;
}
void init_employ(EMPLOYEE* e) {
	int i;
	char gildong[20] = "ȫ�浿";
	char buf[5];
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; i++) {
		e[i].id = rand()%100;
		sprintf(buf, "%d", i + 1);
		strcat(gildong,buf);
		strcpy(e[i].name, gildong);
		strcpy(gildong ,"ȫ�浿");
		e[i].tel = (rand()*rand())%99999999;
		e[i].age = (rand() % 30 + 25);
	}
}