#include <stdio.h>
int main(void)
{
	int temp;
	printf("Enter temperature:");
	scanf("%d",&temp);
	
	if(temp>30){
		printf("weather is hot!");
	}
	else{
		printf("weather is not hot");
	}
	return 0;
	
	
}
