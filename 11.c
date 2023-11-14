#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct contact_list {
	char name[20], h_num[20], p_num[20];
}typedef CONTACT;

int main() {
	int i;
	char name[20];
	CONTACT num_list[3];
	for (i = 0; i < 3; i++) {
		printf("이름을 입력하시오: ");
		gets_s(num_list[i].name, 20);
		printf("집전화번호를 입력하시오: ");
		gets_s(num_list[i].h_num, 20);
		printf("휴대폰번호를 입력하시오: ");
		gets_s(num_list[i].p_num, 20);
	}
	printf("이름을 입력하시오: ");
	gets_s(name, 20);
	for (i = 0; i < 3; i++) {
		if (!strcmp(name, num_list[i].name))
			printf("집전화번호: %s\n휴대폰번호: %s\n",num_list[i].h_num,num_list[i].p_num);
	}
	return 0;
}