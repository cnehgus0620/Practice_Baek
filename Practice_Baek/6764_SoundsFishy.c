#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[4] = { 0, }; 
	int inc = 0;
	int dec = 0;
	int con = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 3; i++) {
		if (arr[i] < arr[i + 1]) {
			inc += 1;
		}
		if (arr[i] > arr[i + 1]) {
			dec += 1;
		}
		else con += 1;
	}
	if (inc == 3) {
		printf("Fish Rising");
	}
	else if (dec == 3) {
		printf("Fish Diving");
	}
	else if (con == 3) {
		printf("Fish At Constant Depth");
	}
	else printf("No Fish");

	return 0;
}