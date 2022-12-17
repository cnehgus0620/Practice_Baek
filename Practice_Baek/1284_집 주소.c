#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char num[10002];
	
	while (1) {
		int space = 2;
		scanf("%s", num);

		if (num[0] == '0') {
			break;
		}
		space += strlen(num) - 1;

		for (int i = 0; i < strlen(num); i++) {
			if (num[i] == '1') {
				space += 2;
			}	
			else if (num[i] == '0') {
				space += 4;
			}
			else {
				space += 3;
			}
		}
		printf("%d\n", space);
	}
	return 0;
}