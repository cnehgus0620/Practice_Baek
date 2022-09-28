#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int limit, speed;
	scanf("%d%d", &limit, &speed);
	if (speed - limit <= 20 && speed - limit >= 1) {
		printf("You are speeding and your fine is $100.");
	}
	else if (speed - limit <= 30 && speed - limit >= 21) {
		printf("You are speeding and your fine is $270.");
	}
	else if (speed - limit >= 31) {
		printf("You are speeding and your fine is $500.");
	}
	else
		printf("Congratulations, you are within the speed limit!");
	return 0;
}