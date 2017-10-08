#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("(A)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (int i = 0; i <10; i++)
	{
		for(int j=10;j>i;j--)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (int i = 0; i <10; i++)
	{
		for(int s=0;s<i;s++)
		{
			printf(" ");
		}
		for (int j = 10; j>i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(D)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int s = 9; s >i; s--)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}