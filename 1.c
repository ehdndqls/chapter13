#include<stdio.h>
struct book {
	int id;
	char title[100];
	char author[20];
};
int main() {
	struct book b1 ={ 1, "�ٶ��� �Բ� �������", "������ ��ÿ" };
	printf("%d, %s, %s\n", b1.id, b1.title, b1.author);

	return 0;
}