#include<stdio.h>
int main()
{
	int depart,sdepart;
	printf("\nSelect your department:\n Enter 1 for CS and enter 2 for electrical enginnering:  ");
	scanf("%d",&depart);
	switch(depart)
	{
	
		case 1: {
			
		printf("\nyou have selected CS\n"); 
		printf("\n choose your specialization:\nEnter 1 for AI\nEnter 2 for Datascience\nEnter 3 for cyber\nEnter 4 for gaming");
			scanf("%d",&sdepart); 
		switch(sdepart)
		{
			
			case 1: printf("\nyou have chosen ai "); break;
				case 2: printf("\nyou have chosen ds "); break;
					case 3: printf("\nyou have chosen cyber "); break;
						case 4: printf("\nyou have chosen gaming "); break;
						  default: printf("\ninvalid input"); break;
		}}
		break;
		case 2: printf("\nyou have selected EE"); break;
		
		default: printf("invalid input");
	}
	
	}
		


