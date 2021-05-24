#include <stdio.h>
#include<stdlib.h>
main()
{
	int i,choice,pin;
	float cash=10000;
	char c;
	printf("Enter your Pin: ");
	scanf("%d",&pin);
	if(pin==1234)
	{
		printf("Pin successfully validated.\n\n");
		printf("Hello Customer\n");
	do{
		printf("Choose your option\n1. Withdraw\n2. Deposit\n3. Balance Check\n4. Exit\n\n");
		printf("Enter your option: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				int withdraw;
				printf("Enter Amount to withdraw: ");
				scanf("%d",&withdraw);
				if(withdraw%100==0)
				{
					if(cash>=withdraw)
					{
						cash-=withdraw;
						printf("Amount after withdrawl of Rs. %d is Rs. %f\n",withdraw,cash);
					}
					else
					{
						printf("Insufficient balance.\n");
					}
				}
				else
				{
					printf("Enter withdrawl amount only in 100's.\n");
				}
				break;
			}
			case 2:
			{
				int deposit;
				printf("Enter Amount to deposit: ");
				scanf("%d",&deposit);
				if(deposit%100==0)
				{
					cash=cash+deposit;
					printf("Balance after depositing amount of Rs. %d is Rs. %f\n",deposit,cash);
				}
				else
				{
					printf("Enter amount only in 100's.\n");
				}
				break;
			}
			case 3:
			{
				printf("Balance in account is Rs. %2.f\n",cash);
				break;
			}
			case 4:
			{
				exit(1);
			}
			default:
			{
				printf("Enter valid option\n");
				break;
			}
		}
		printf("To continue Press 'Y' else any letter\n");
		fflush(stdin);
		scanf("%c",&c);
	}while(c=='y' || c=='Y');
	printf("Thanks for using our ATM\n");
}
else
{
	printf("Wrong Pin");
}
return 0;
}
