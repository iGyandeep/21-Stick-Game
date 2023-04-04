#include<stdio.h>
int main()
{
	int stick=21,user,system;
	printf("There are 21 sticks");
	printf("\nYou have to choose maximum 4 sticks and minimum 1 stick in a single turn");
	printf("\nComputer will also choose maximum 4 stick and minimum 1 stick in a single turn");
	printf("\nLast picker will loose the game");
	printf("\n If you choose more than 4 sticks it will invalid move");
	
	while(stick>1)
	{
		printf("\n\n\nNumber of sticks available right now is %d",stick);
		printf("\n\nYour Turn");
		printf("\n\nPick up the stick(s) (min=1 and max=4)");
		scanf("\n%d",&user);
		
		if(user>4)
		{
			printf("Invalid Move");
			break;
		}
		system=5-user;
		printf("\nComputer Turn");
		printf("\nCompurt choose %d",system);
		stick=stick-user-system;
		continue;
		
		if(stick==1)
		break;
	}
	stick--;
	printf("\nYou Loose the game");
}
