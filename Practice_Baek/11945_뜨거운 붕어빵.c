#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int r, c;
	char board[15];

	scanf("%d%d", &r, &c);
	for (int i = 0; i < r; i++) {
		scanf("%s", board);
		for (int j = c - 1; j >= 0; j--) {
			printf("%c", board[j]);
		}
		printf("\n");
	}
}