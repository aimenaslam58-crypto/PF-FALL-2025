#include <stdio.h>
int main(void) 
{
char ch;
printf("Enter a character:");
scanf("%c",&ch);

if (ch>='A'&& ch<='Z') {
	printf("it is an uppercase character");
} else if (ch>='a' && ch<='z') {
	printf("it is a lowercase character");
} else if (ch>='0' && ch<='9'){
	printf("it is a digit");
} else { 
printf(" it is a special character:");
}
return 0;
}
