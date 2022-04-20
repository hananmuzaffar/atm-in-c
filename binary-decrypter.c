#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i,j,temp,num,decimal,inc;
	printf("Enter number of Binary Sets: ");
	scanf("%d",&num);
	int binary[num];
	printf("Enter a Binary code separated with space:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&binary[i]);
	}
	printf("Decrypted Binary Code:\n");
	for(j=0;j<num;j++)
	{
		temp=binary[j];
		inc=0;
		decimal=0;
		while(temp!=0)
		{
			i=temp%10;
			decimal=decimal+(i*pow(2,inc));
			temp=temp/10;
			inc++;
		}
		printf("%c",decimal);
	}
	printf("\n");
	return 0;
}
