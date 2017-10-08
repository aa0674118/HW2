#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double rate, amount, principal=5000;
	printf("%s\t%s\t%s\n","Annual interest rate","Year","Amount on deposit");
	for (rate = 0.1; rate <= 0.125; rate+=0.005)
	{
		for (int year =1; year <=15; year++)
		{
			amount = principal*pow(1 + rate, year);
			printf("%19.2f%%%8u%21.2f\n", rate*100, year, amount);
		}
	}
	system("pause");
	return 0;
}