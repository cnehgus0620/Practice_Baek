#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    if (n == 2) {
        if (m == 18) {
            printf("Special");
        }
        else if (m < 18) {
            printf("Before");
        }
        else {
            printf("After");
        }
    }
    if (n > 2) {
        printf("After");
    }
    if (n < 2) {
        printf("Before");
    }

    return 0;
}