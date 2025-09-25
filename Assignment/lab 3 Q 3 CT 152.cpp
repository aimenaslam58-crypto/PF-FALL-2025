#include<stdio.h>
int main(void){
float cost,discount,postdiscount,savedamount;
printf("Enter cost of item:\n");
scanf("%f",&cost);
if(cost>=4000 && cost<=2000){
	discount=20;
	savedamount=(cost*discount)/100;
	postdiscount=cost-savedamount;
}
else if(cost>=4001 && cost<=6000){
	discount=30;
	savedamount=(cost*discount)/100;
	postdiscount=cost-savedamount;
}
else if(cost>6000){
	discount=50;
	savedamount=(cost*discount)/100;
	postdiscount=cost-savedamount;
}
printf("The actual amount is %f \n The saved amount is %f \n The amount after discount is %f",cost,savedamount,postdiscount);
return 0;
}
