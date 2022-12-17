#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int lev, split, branch;

	while (1) {
		int sum = 1;
		scanf("%d", &lev);

		if (lev == 0) break;
		for (int i = 0; i < lev; i++) {
			scanf("%d %d", &split, &branch);
			sum = sum * split - branch;
		}
		printf("%d\n", sum);
	}
	return 0;
}