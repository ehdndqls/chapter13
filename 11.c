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
		printf("�̸��� �Է��Ͻÿ�: ");
		gets_s(num_list[i].name, 20);
		printf("����ȭ��ȣ�� �Է��Ͻÿ�: ");
		gets_s(num_list[i].h_num, 20);
		printf("�޴�����ȣ�� �Է��Ͻÿ�: ");
		gets_s(num_list[i].p_num, 20);
	}
	printf("�̸��� �Է��Ͻÿ�: ");
	gets_s(name, 20);
	for (i = 0; i < 3; i++) {
		if (!strcmp(name, num_list[i].name))
			printf("����ȭ��ȣ: %s\n�޴�����ȣ: %s\n",num_list[i].h_num,num_list[i].p_num);
	}
	return 0;
}