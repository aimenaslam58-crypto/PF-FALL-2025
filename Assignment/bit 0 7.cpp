#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if((num&72)==72){
    	printf("4th and 7th bits are on\n");
	  num=num&183;
			printf("With 4th and 7th bits in off position:%d\n",num);
		}else{
			printf("The 4th and 7th bits are off.");
		}

    return 0;
}
