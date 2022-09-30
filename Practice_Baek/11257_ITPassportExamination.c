#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int stNum;
	int str, man, tec;
	int caseCount;

	scanf("%d", &caseCount);
	for (int i = 0; i < caseCount; i++) {
		scanf("%d %d %d %d", &stNum, &str, &man, &tec);
		int sum = str + man + tec;
		if (str < 11 || man < 8 || tec < 12 || sum < 55) {
			printf("%d %d FAIL\n", stNum, sum);
		}
		else printf("%d %d PASS\n", stNum, sum);
	}
	return 0;
}