#include<stdio.h>

struct mail {
	char title[50];
	char sender[20];
	char receiver[20];
	char content[100];
	char date[20];
	int pri;
};

int main() {
	struct mail m = { "�Ⱥθ���", "chulsoo@hankuk.ac.kr", "hsh@hankuk.ac.kr", "�ȳ��Ͻʴϱ�? ���� ����������?", "2010/9/1", 1 };
	printf("����: %s\n������: %s\n�߽���: %s\n����: %s\n��¥: %s\n�켱����: %d\n", m.title, m.sender, m.receiver, m.content, m.date, m.pri);

	return 0;
}