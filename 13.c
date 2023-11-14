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
	printf("������ Ÿ���� �Է��Ͻÿ�(0, 1, 2): ");
	scanf_s("%d", &shape.type);
	if (shape.type == 0) {
		printf("�غ��� ������ ���̸� �Է��Ͻÿ�: ");
		scanf_s("%d %d", &shape.data.tri.bass, &shape.data.tri.height);
		printf("������ %d", shape.data.tri.bass * shape.data.tri.height / 2);
	}
	else if (shape.type == 1) {
		printf("���ο� ������ ���̸� �Է��Ͻÿ�: ");
		scanf_s("%d %d", &shape.data.rect.width, &shape.data.rect.height);
		printf("������ %d", shape.data.rect.width * shape.data.rect.height);
	}
	else {
		printf("�������� ���̸� �Է��Ͻÿ�: ");
		scanf_s("%d", &shape.data.circ.radius);
		printf("������ %d", FI * shape.data.circ.radius * shape.data.circ.radius);
	}

	
}