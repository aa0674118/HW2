#include <stdio.h>
#include <stdlib.h>
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int s = 5; s > i; s--) { printf(" "); }
		for (int j = 1; j <= 2 * i - 1; j++) { printf("*"); }
		printf("\n");
	}
	for (int i = 4; i >=0;i--)
	{
		for (int s = 5; s > i; s--) { printf(" "); }
		for (int j = 1; j <= 2 * i - 1; j++) { printf("*"); }
		printf("\n");
	}
	system("pause");
	return 0;
}