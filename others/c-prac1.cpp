#include<stdio.h>

int main() {
	freopen("in1", "r", stdin);
	freopen("out1", "w", stdout);

	int x = 10;
	
	int *ptr;
	ptr = &x;

	*ptr += 3;

	printf("%d\n", x);

	x = 5;

	printf("%d\n", x);
}