#include<stdio.h>
struct account {
	int number;
	char name[20];
	int balance;
};

int main() {
	struct account a = { 1, "ȫ�浿", 100000 };
	printf("{%d, %s, %d}\n", a.number, a.name, a.balance);

	return 0;
}