#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i,password,len;
	srand((unsigned int)time(NULL));
	printf("Enter Password length and must be greater than 8: ");
	scanf("%d",&len);
	if(len>=8)
	{
		printf("Generated Password is: ");
		for(i=0;i<len;i++)
		{
			int k=rand()%128;
			if((k>48&&k<=57)||(k>64&&k<=90)||(k>=97&&k<=122)||(k>35&&k<=37)||k==64)
			{
				printf("%c",k);
			}
			else
			{
				i--;
			}
		}
		printf("\n");
	}
	else
	{
		printf("Length should be greater than or equal to 8");
	}
return 0;
}
