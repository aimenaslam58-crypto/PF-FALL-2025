#include <stdio.h>
int main(void)
{
	int units,bill;
	printf("Enter units consumed:");
	scanf("%d",&units);
	
	if(units <= 100){
		bill = units *5;
	} else if (units >=101 && units <= 200){
		bill = units * 7;
	} else {
		bill = units * 10;
	}
	printf("Your electricity bill is %d Rs:",bill);
return 0;
}
