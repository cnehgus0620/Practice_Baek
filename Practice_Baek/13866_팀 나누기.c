#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void bubble_sort(int list[], int n) {
	int i, j, temp;

	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}

int main() {

	int i;
	int arr[4] = { 0, };
	int ans = 0;

	for (i = 0; i < 4; i++) {
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr, 4);

	ans = (arr[0] + arr[3]) - (arr[1] + arr[2]);

	printf("%d ", abs(ans));

	return 0;
}