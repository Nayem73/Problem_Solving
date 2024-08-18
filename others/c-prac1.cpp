#include<stdio.h>

int main() {
	freopen("in1", "r", stdin);
	freopen("out1", "w", stdout);



	//int *p = {33, 44, 55}; //This does not work for array

	char c = 'A';
	char *p = &c;
	char **q = &p;

	printf("%p\n", &p);
	printf("%p\n", &c);
	
	printf("%c\n", *p);

	
	printf("%p\n", q);
	printf("%c\n", **q);
}