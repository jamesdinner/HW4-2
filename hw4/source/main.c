#include<stdio.h>

long int fibonacci(int);

int main()
{
	int a, i, s;
	printf("輸入想輸出幾項fibonacci數列 : ");
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		s = fibonacci(i);
		printf("第 %d 項為 : %d\n", i, s);
	}
}

long int fibonacci(int n)
{
	if (n <= 2)
		return 1;
	else
		return fibonacci(n - 2) + fibonacci(n - 1);
}