#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 500

int main() 
{
	char password[501] = { 0, };
	while (1) {
		fgets(password, MAX_LENGTH, stdin);
		password[strlen(password) - 1] = '\0';

		if (strcmp(password, "END") == 0) { 
			// strcmp는 두 인자를 비교했을때
			// 0보다 작으면 string1 < string2
			// 0이면 string1 == string2
			// 0보다 크면 string1 > string2
			break;
		}
		for (int i = strlen(password) - 1; i >= 0; i--) {
			printf("%c", password[i]);
		}
		printf("\n");
	}
	return 0;
}