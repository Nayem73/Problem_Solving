#include<stdio.h>

int main() {
	freopen("in1", "r", stdin);
	freopen("out1", "w", stdout);
	
	for (int i = 0; i <= 129; i++) {
		printf("ASCII for %c is: %d\n", i, i);
	}
}