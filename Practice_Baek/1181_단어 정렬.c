#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
    char str[51];
    int len;
}Str;
int compare(const void* a, const void* b) {
    Str s1 = *(Str*)a, s2 = *(Str*)b;
    if (s1.len < s2.len)
        return -1;
    else if (s1.len > s2.len)
        return 1;
    return strcmp(s1.str, s2.str);
}

int main() {
    int N, min = 0, max = 0;
    scanf("%d", &N);
    Str s[N];
    for (int i = 0; i < N; i++) {
        scanf("%s", s[i].str);
        s[i].len = strlen(s[i].str);
    }
    qsort(s, N, sizeof(Str), compare);
    puts(s[0].str);
    for (int i = 1; i < N; i++)
        if (strcmp(s[i - 1].str, s[i].str))
            puts(s[i].str);
    return 0;
}