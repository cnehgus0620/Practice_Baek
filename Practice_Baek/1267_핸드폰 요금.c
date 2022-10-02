#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr[20] = { 0, }, caseNum, time;
	int i;
	int Y = 0, M = 0;
	int ans = 0;

	scanf("%d", &caseNum);

	for (i = 0; i < caseNum; i++) {
		scanf("%d", &arr[i]);
		Y += arr[i] / 30 + 1;
		M += arr[i] / 60 + 1;
	}

	Y *= 10, M *= 15;

	if (Y < M) printf("Y %d", Y);
	else if (Y > M) printf("M %d", M);
	else printf("Y M %d", Y);
	
	return 0;
}