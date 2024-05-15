#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{
	int car, a, b, c;
	scanf("%d", &car);
	scanf("%d %d %d", &a, &b, &c);
	if (car > a || car > b || car > c) printf("충돌!");
	else printf("무사합니다!");
}