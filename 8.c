#include<stdio.h>
#define PI 3.14159
struct point {
	int x, y;
};

struct circle {
	struct point center;
	double radius;
}typedef CIRCLE;

double area(CIRCLE c);
double perimeter(CIRCLE c);

int main() {
	CIRCLE c = { {0,0}, 10 };
	printf("���� �߽���: %d %d \n���� ������: %d\n", c.center.x, c.center.y, (int)c.radius);
	printf("���� ���� = %lf, ���� �ѷ� = %lf", area(c), perimeter(c));

	return 0;
}
double area(CIRCLE c) {
	return c.radius * c.radius * PI;
}

double perimeter(CIRCLE c) {
	return 2 * PI * c.radius;
}