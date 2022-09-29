#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int w, k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &w, &k);
        printf("%d", w * k / 2);
    }
    return 0;
}