#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a = 0, b = 0;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}