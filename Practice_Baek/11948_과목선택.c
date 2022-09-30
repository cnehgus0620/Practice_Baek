// 11948_과목선택 변형 문제 (정렬 사용)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 6

void bubble_sort(int list[], int n) {
	int i, j, temp;

	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (list[j] < list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}

void main() 
{
	int i;
	int n = MAX_SIZE;
	int sum = 0, arr[6] = { 0, };

	for (i = 0; i < 6; i++) {
		scanf("%d", &arr[i]);
	}
	
	bubble_sort(arr, n);

	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}

	for (i = 0; i < 4; i++) {
		sum += arr[i];
	}
	printf("%d", sum);

	return 0;
}