#include<stdio.h>


int main()
{
	int a,b,s;
	printf("輸入a的b次方");
	scanf("%d %d", &a, &b);
	s = a;
	for (int i = 1; i < b; i++)
	{
		s = s * a;
	}
	printf("%d", s);
}