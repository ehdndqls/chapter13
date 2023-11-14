#include<stdio.h>
#define FI 3.141592

struct shape {
	int type;
	union {
		struct { int bass, height; }tri;
		struct { int width, height; }rect;
		struct { int radius; }circ;
	}data;
};

int main() {
	struct shape shape;
	printf("도형의 타입을 입력하시오(0, 1, 2): ");
	scanf_s("%d", &shape.type);
	if (shape.type == 0) {
		printf("밑변과 높이의 길이를 입력하시오: ");
		scanf_s("%d %d", &shape.data.tri.bass, &shape.data.tri.height);
		printf("면적은 %d", shape.data.tri.bass * shape.data.tri.height / 2);
	}
	else if (shape.type == 1) {
		printf("가로와 세로의 길이를 입력하시오: ");
		scanf_s("%d %d", &shape.data.rect.width, &shape.data.rect.height);
		printf("면적은 %d", shape.data.rect.width * shape.data.rect.height);
	}
	else {
		printf("반지름의 길이를 입력하시오: ");
		scanf_s("%d", &shape.data.circ.radius);
		printf("면적은 %d", FI * shape.data.circ.radius * shape.data.circ.radius);
	}

	
}