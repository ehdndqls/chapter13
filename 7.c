#include<stdio.h>

struct point {
	int x, y;
};

int quadrant(struct point p);

int main() {
	struct point p = { -1,2 };
	printf("(%d, %d)의 사분면 = %d\n", p.x, p.y, quadrant(p));

	return 0;
}
int quadrant(struct point p){
	if (p.x > 0)
		if (p.y > 0) return 1;
		else return 4;
	else
		if (p.y > 0) return 2;
		else return 3;
}