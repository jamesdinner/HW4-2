#include<stdio.h>


int main()
{
	int a,b,s;
	printf("��Ja��b����");
	scanf("%d %d", &a, &b);
	s = a;
	for (int i = 1; i < b; i++)
	{
		s = s * a;
	}
	printf("%d", s);
}