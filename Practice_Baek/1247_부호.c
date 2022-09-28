#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, over_plus = 0, over_minus = 0;
    long long buf, sum, b_sum;
    for (int j = 0; j < 3; j++)
    {
        scanf("%d", &n);
        over_plus = 0;
        over_minus = 0;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &buf);
            b_sum = sum;
            sum += buf;
            if (b_sum > 0 && sum < 0 && buf > 0)
                over_plus++;
            else if (b_sum < 0 && sum > 0 && buf < 0)
                over_minus++;
        }
        // print part
        if (over_plus == over_minus)
        {
            if (sum == 0)
                printf("0\n");
            else
                printf(sum > 0 ? "+\n" : "-\n");
        }
        else {
            if (over_plus > over_minus)
                printf("+\n");
            else
                printf("-\n");
        }
    }
    return 0;
}