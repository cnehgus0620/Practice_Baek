#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int M;
	int ball = 1;
	int c1, c2;
	scanf("%d", &M);
	
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &c1, &c2);

		if (c1 == ball || c2 == ball) {
			if (c1 == ball) {
				ball = c2;
			}
			else {
				ball = c1;
			}
		}
	}
	printf("%d", ball);

	return 0;
}