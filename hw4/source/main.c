#include<stdio.h>

long int fibonacci(int);

int main()
{
	int a, i, s;
	printf("��J�Q��X�X��fibonacci�ƦC : ");
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		s = fibonacci(i);
		printf("�� %d ���� : %d\n", i, s);
	}
}

long int fibonacci(int n)
{
	if (n <= 2)
		return 1;
	else
		return fibonacci(n - 2) + fibonacci(n - 1);
}