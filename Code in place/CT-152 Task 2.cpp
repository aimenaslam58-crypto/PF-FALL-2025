#include <stdio.h>
int main(void)
{
	int a,b,c;
	printf("Enter the side lengths of triangle:\n");
	printf("1st side(a):");
	scanf("%d",&a);
	printf("2nd side(b):");
	scanf("%d",&b);
	printf("3rd side(c):");
	scanf("%d",&c);
	
	if((a+b)>c && (b+c) > a && (a+c) > b) {
		if (a==b&&b==c&&a==c){
			printf("This is an equilateral triangle");
		}else if (a==b || b==c || a==c){
			printf("This is an isosceles triangle");
		}else {
			printf("This is a scalene triangle");
		}
	}
	else printf("Not a valid triangle");
	return 0;
}
	

