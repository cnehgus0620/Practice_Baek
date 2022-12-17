#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int P, K, yaksu[2];

	scanf("%d %d", &P, &K);
	
	for (int i = 2; i < P; i++) {
		if (P % i == 0) {
			yaksu[0] = i;
			yaksu[1] = P / i;
			break;
		}
	}
	
	if (yaksu[0] < K) {
		printf("GOOD");
	}
	else {
		printf("BAD %d", yaksu[0]);
	}

}