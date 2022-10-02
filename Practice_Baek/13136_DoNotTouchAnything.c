#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // 곱한 값이 int형의 범위를 넘으므로 long long 자료형 선택
    long long r, c, n, cctv_x, cctv_y;

    // 행 = r, 열 = c, cctv의 영역 = n
    scanf("%lld %lld %lld", &r, &c, &n);

    // 각각의 행과 열이 3의 배수인지 검사
    if (r % n == 0) cctv_x = r / n;
    else cctv_x = r / n + 1;
    if (c % n == 0) cctv_y = c / n;
    else cctv_y = c / n + 1;

    // cctv의 영역 출력
    printf("%lld", cctv_x * cctv_y);

    return 0;
}