#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a + d < b + c) {
		printf("%d", a + d);
	}
	else {
		printf("%d", b + c);
	}
	return 0;
}