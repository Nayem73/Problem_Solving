#include<stdio.h>

int main() {
	freopen("in1", "r", stdin);
	freopen("out1", "w", stdout);

	printf("%d\n", sizeof(int));

	int num;
	printf("%d\n", sizeof(num));

	int num2 = 55;
	printf("%d\n", sizeof(num2));
}