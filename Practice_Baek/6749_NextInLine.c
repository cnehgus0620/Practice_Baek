#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	
	printf("%d", b + b - a);

	return 0;
}