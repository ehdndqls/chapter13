#include<stdio.h>

struct card {
	int value;
	char suit;
}CARD;

int main() {
	int i,count =0;
	struct card card_list[52];
	for (i = 0; i < 52; i++) {
		if (i % 13 == 0)
			count++;
		card_list[i].value = (i % 13) + 1;
		if (count == 1)
			card_list[i].suit = 'd';
		else if (count == 2)
			card_list[i].suit = 'h';
		else if (count == 3)
			card_list[i].suit = 'c';
		else 
			card_list[i].suit = 's';
	}
	for (i = 0; i < 52; i++) {
		printf("%d:%c ", card_list[i].value, card_list[i].suit);
	}
	return 0;
}