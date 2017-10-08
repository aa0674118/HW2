#include <stdio.h>
#include <stdlib.h>
int main()
{
	int side1,side2,side3;
	printf("side1\tside2\n");
	for (side1 = 1; side1 <= 500; side1++)
	{
		for (side2=1; side2 < 500; side2++)
		{
			for (side3=1; side3 < 500; side3++)
			{
				if ((side1*side1) == (side2*side2 + side3*side3)) { printf("%d\t%d\n",side2,side3); }
			}
		}
	}
	system("pause");
	return 0;
}