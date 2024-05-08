#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b, c;
    int x, y;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b)
    {
        if (b != c) printf("%d", 1000 + a * 100);
        else printf("%d", 10000 + a * 1000);
        return 0;
    }
    if (b == c)
    {
        if (c != a) printf("%d", 1000 + b * 100);
        else printf("%d", 10000 + b * 1000);
        return 0;
    }
    if (c == a)
    {
        if (a != b) printf("%d", 1000 + c * 100);
        else printf("%d", 10000 + c * 1000);
        return 0;
    }
    x = (a > b) ? a : b; y = (x > c) ? x : c;
    printf("%d", y * 100);
}