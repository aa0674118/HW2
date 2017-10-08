#include <stdio.h>
#include <stdlib.h>
int main()
{
	int account=0;
	float beginning, charge, credits, limit,Blance;
	while(1)
	{
		printf("Enter account number(-1 to end):");	scanf_s("%d",&account);
		if (account != -1)
		{
			printf("Enter beginning balance:");	scanf_s("%f", &beginning);
			printf("Enter total charge:");		scanf_s("%f", &charge);
			printf("Enter total credits:");		scanf_s("%f", &credits);
			printf("Enter credit limit:");		scanf_s("%f", &limit);
			Blance = beginning + charge - credits;
			if (Blance > limit)
			{
				printf("Account:\t%d\n", account);
				printf("Credit limit:\t%.2f\n", limit);
				printf("Balance:\t%.2f\n", Blance);
				printf("Credit Limit Exceed\n\n");
			}
			else { printf("\n"); }
		}
		else { break; }
		
	}
	return 0;
}