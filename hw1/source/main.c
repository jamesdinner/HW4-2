#include<stdio.h>

int main()
{
	char a;
	scanf("%c", &a);
	if (a >= 65 && a <= 90)
	{
		printf("%c", a + 32);
	}
	if (a <= 122 && a >= 97)
	{
		printf("%c", a - 32);
	}
}