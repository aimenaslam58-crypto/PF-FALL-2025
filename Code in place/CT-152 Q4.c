#include <stdio.h>
int main(void)
{
	float numerator ,denominator, result;
	printf("Enter the numerator:");
	scanf("%f",&numerator);
	printf("Enter the denominator:");
	scanf("%f",&denominator);
	
	if(denominator==0){
		printf("Error! division is not possible");
	}
	else{
		result=numerator/denominator;
		printf("Result is : %.2f\n",result);
	}
	return 0;
}
