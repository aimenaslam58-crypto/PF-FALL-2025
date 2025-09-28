#include <stdio.h>
int main(){
	float a,b,c,d,r1,r2;
	printf("Enter a: ");
	scanf("%f",&a);
	printf("Enter b: ");
	scanf("%f",&b);
	printf("Enter c: ");
	scanf("%f",&c);
	d=(b*b)-(4*a*c);
	if(d>0){
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("r1=r2=%f\n,r1");
	}
	else if (d==0){
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("r1=%f r2=%f,r1,r2");
	}
	else{
		printf("The Roots are imaginary");
	}
	return 0;
}
