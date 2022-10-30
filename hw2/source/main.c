#include<stdio.h>

int main()
{
	int i,a,b;
	printf("enter two integer\n");
	scanf("%d %d", &a, &b);
	for (i = 1; i <=a*b; i++)
	{
		if (i%a == 0 && i%b == 0)
		{
			printf("%d", i);
			break;
		}
	}
}