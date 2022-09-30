#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[102];
    int i = 0;
    int cnt[26] = { 0, };

    scanf("%s", str);

    for (i; i < strlen(str); i++) {
        cnt[str[i] - 'a']++; // str[i] - 'a'로 ascII코드 이용 ex) 98 - 97
    }
    for (i = 0; i < 26; i++) {
        printf("%d ", cnt[i]);
    }
    return 0;
}