#include<stdio.h>

int main() {
	freopen("in1", "r", stdin);
	freopen("out1", "w", stdout);

	int x = 10, y;
	int *p, *q;

	p = &x;
	y = *p;//10
	*p = 15;//x=15
	*q = 20;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	printf("*p = %d\n", *p);
	printf("*q = %d\n", *q);
}