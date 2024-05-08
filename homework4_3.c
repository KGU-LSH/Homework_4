#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d\n%d", &a, &b, &c);
    int x = a * 60 + b + c;
    if (x >= 1440) x -= 1440;
    printf("%d %d", x / 60, x % 60);
}