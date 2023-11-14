#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20

struct music {
	char title[20];
	char singer[20];
	char location[20];
	enum genre { SONG, POP, CLASSICAL, OST }genre;
};

void add_music(struct music*);
void delete_music(struct music*);
void print_music(int, struct music *);
int search_music(struct music*);
int num = 0;

int main() {
	int answer, count = 0, i;
	struct music music_list[SIZE];
	
	printf("======================\n");
	printf("1. �߰�\n2. ����\n3. ���\n4. �˻�\n5. ����\n");
	printf("======================\n");

	while (1) {
		answer = -1;
		printf("\n�������� �Է��Ͻÿ�: ");
		scanf_s("%d", &answer);
		rewind(stdin);
		switch (answer) {
		case 1: 
			add_music(music_list);
			break;
		case 2: 
			delete_music(music_list);
			break;
		case 3: 
			for (i = 0; i < num; i++) {
				print_music(i,music_list);
			}
			break;
		case 4:
			search_music(music_list);
			break;
		case 5:
			return 0;
		default:
			printf("����: �޴��� ���� ��ȣ�Դϴ�.\n");
			break;
		}
	}
	return 0;
}

void add_music(struct music *list) {
	struct music m;
	printf("����: ");
	gets_s(m.title,20);
	printf("����: ");
	gets_s(m.singer, 20);
	printf("��ġ: ");
	gets_s(m.location, 20);
	printf("�帣: ");
	scanf_s("%d", &m.genre);
	rewind(stdin);
	list[num] = m;
	num++;
	return;
}

void delete_music(struct music *list) {
	int index = search_music(list);
	for (; index < num; index++) {
		list[index] = list[index + 1];
	}
	printf("�����Ǿ����ϴ�. \n");
	num--;
}

int search_music(struct music *list) {
	int i;
	char keyward[20];
	printf("�뷡�� ������ �Է��Ͻÿ�: \n");
	gets_s(keyward, 20);
	for (i = 0; i < num; i++) {
		if (!strcmp(keyward, list[i].title)) {
			print_music(i,list);
			return i;
		}
	}
	printf("�˻��� �뷡�� �����ϴ�. \n");
	return -1;
}

void print_music(int index, struct music* list) {
	printf("����: %s\n����: %s\n��ġ: %s\n�帣: %d\n", list[index].title, list[index].singer, list[index].location, list[index].genre);
}