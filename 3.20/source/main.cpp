#include <stdio.h>
#include <stdlib.h>
int main()
{
	int hours=0;
	float rate,salary;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");			scanf_s("%d", &hours);
		if (hours != -1)
		{
			printf("Enter hourly rate of the worker ($00.00):");	scanf_s("%f", &rate);
			if (hours > 40) 
			{
				hours -= 40;
				salary = 40*rate+hours*rate*1.5;
			}
			else if (hours <= 40) { salary = hours*rate; }
			printf("Salary is $%.2f\n\n",salary);
		}
		else { break; }
	}
	return 0;
}