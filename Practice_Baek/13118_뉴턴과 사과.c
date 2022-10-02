#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr[4] = { 0, };
    int i, x, y, r;
    int cnt = 0;

    // 배열에 사람들의 x좌표 입력
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    // 원심의 x좌표, y좌표, 반지름(r) 입력
    scanf("%d %d %d", &x, &y, &r);

    // 원심의 x좌표와 같은지 검사
    for (i = 0; i < 4; i++) {
        if (arr[i] == x) {
            cnt = i + 1;
        }
    }

    // 아무와도 충돌하지 않으면 0, 그렇지 않으면 index + 1 출력
    if (cnt == 0) printf("0");
    else printf("%d", cnt);

    return 0;
}