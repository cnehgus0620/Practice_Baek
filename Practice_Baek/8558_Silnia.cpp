#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int factorial = 1;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		factorial *= i;
		factorial %= 10;
	}
	printf("%d", factorial);
	return 0;
}