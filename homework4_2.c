#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	char a, b;
	scanf("%c %c", &a, &b);
	if (a - b == 32 || b - a == 32) printf("Success!");
	else printf("Failure!");
}
