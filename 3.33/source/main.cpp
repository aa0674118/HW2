#include <stdio.h>
#include <stdlib.h>
int main()
{
	int length, width;
	printf("Enter Width:"); scanf_s("%d",&width);
	printf("Enter Length:");	scanf_s("%d",&length);
	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <=width; j++)
		{
			if ((i == 1) || (i == length) || (j == 1) || (j == width)) { printf("+"); }
			else { printf(" "); }
		}
		printf("\n");
	}
	system("pause");
	return 0;
}