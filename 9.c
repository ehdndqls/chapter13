#include<stdio.h>

struct food {
	char name[100];
	int calories;
};

int main() {
	int i, size, sum = 0;
	struct food food_array[3] = { {"chiken",500},{"ramen",700},{"pizza",900} };
	size = sizeof(food_array) / sizeof(food_array[0]);

	for (i = 0; i < size; i++) {
		sum += food_array[i].calories;
	}
	printf("ÃÑ Ä®·Î¸®: %d\n", sum);

	return 0;
}