#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}