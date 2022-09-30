#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int day;
    int car[5] = { 0, };
    int cnt = 0;

    scanf("%d", &day);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &car[i]);
        if (car[i] == day) {
            cnt++;
        }
        else continue;
    }
    printf("%d", cnt);
    return 0;
}