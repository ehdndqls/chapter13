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
	struct mail m = { "안부메일", "chulsoo@hankuk.ac.kr", "hsh@hankuk.ac.kr", "안녕하십니까? 별일 없으신지요?", "2010/9/1", 1 };
	printf("제목: %s\n수신자: %s\n발신자: %s\n내용: %s\n날짜: %s\n우선순위: %d\n", m.title, m.sender, m.receiver, m.content, m.date, m.pri);

	return 0;
}