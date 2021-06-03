#include <stdio.h>
#include <stdlib.h>
main()
{
	int userPasswords[]={1234,2345,3456,4567,5678,6789,7890,8901,9012,1808,1501},i,password,count=0,flag=0;
	printf("Only 3 trails allowed.\n\n");
	do
	{
		printf("Enter 4 digit pincode: ");
		scanf("%d",&password);
		for(i=0;i<11;i++)
		{
			if(userPasswords[i]==password)
			{
				printf("Authentication Successful");
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			if(count!=2)
			printf("Pincode wrong, Try again\n%d times over. %d times left\n\n",count+1,2-count);
			count+=1;
			}
		}while(count>0&&count<3&&flag==0);
		if(flag==0)
		{
			printf("You exceeded your trails.\nAccount has been blocked.");
		}
}
