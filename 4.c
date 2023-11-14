#include<stdio.h>

struct complex {
	double real;
	double imag;
};

struct complex complex_add(struct complex, struct complex);
void print(struct complex);
int main() {
	struct complex x = { 1,2 }, y = { 2,3 };
	print(x);
	print(y);
	print(complex_add(x,y));

	return 0;
}

struct complex complex_add(struct complex c1, struct complex c2) {
	struct complex s;
	s.real = c1.real + c2.real;
	s.imag = c1.imag + c2.imag;
	return s;
}

void print(struct complex c1) {
	printf("%lf + %lfi\n", c1.real, c1.imag);
}