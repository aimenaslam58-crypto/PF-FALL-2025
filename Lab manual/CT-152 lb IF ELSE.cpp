#include <stdio.h>
int main(){
	float fsc,nts;
	printf("Enter your Fsc percentage: ");
	scanf("%f",&fsc);
	printf("Enter your Nts percentage: ");
	scanf("%f",&nts);
	
	if(fsc>70){
		if(nts>60){printf("you are selected in oxford for IT dept");}
		else if(nts>50){printf("you are selected in oxford of Electronics depart");}
		else if(nts>30){printf("you are selected in oxford for telecommunication depart");}
		
		else if(nts==50){
			if(fsc<=70){
			
			if(fsc>60){printf("you are selected in MIT for IT department");}
			else if (fsc<=59 && fsc>=50){printf("you are selected in MIT for chemical depart");}
			else if (fsc>=40 && fsc<=50){printf("you are selected in MIT for computer depart");
			}}
		}
		}
}
