#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b, c, d;
    int max = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a < b + c && b < c + a && c < a + b)
    {
        if (max < a + b + c) max = a + b + c;
    }
    if (a < b + d && b < d + a && d < a + b)
    {
        if (max < a + b + d) max = a + b + d;
    }
    if (a < c + d && c < d + a && d < a + c)
    {
        if (max < a + c + d) max = a + c + d;
    }
    if (b < c + d && c < d + b && d < b + c)
    {
        if (max < b + c + d) max = b + c + d;
    }
    if (max == 0) printf("No");
    else printf("%d", max);
}