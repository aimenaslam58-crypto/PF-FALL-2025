#include <stdio.h>
int main(void)
{
	//take celsius as input and fahrenheit as output
	float celsius,fahrenheit;
	printf("Enter temperature in celsius:");
	scanf("%f",&celsius);
	
	fahrenheit=celsius*9/5+32;
	printf("result in fahrenheit : %.1f",fahrenheit);
	 /*observations:
	 1.When celsius = 0, fahrenheit=32
	 2.When celsius = 100, fahrenheit=212
	 3.When celsius = -4, fahrenheit=24.8
	 */
	 return 0;
}
