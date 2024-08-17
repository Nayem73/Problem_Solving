#include<stdio.h>

int main() {
	freopen("in1", "r", stdin);
	freopen("out1", "w", stdout);
	
	int ara[5] = {50, 60, 70, 80, 90};

	printf("Address of ara is %p\n", ara); //this also works &ara
	printf("Address of ara[3] is %p", &ara[3]);
}