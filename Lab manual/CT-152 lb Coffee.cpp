#include <stdio.h>
int main(){
	char ch;
	char size;
	printf("Enter the type of coffee(B/W)?: ");
	scanf("%ch",&ch);
	printf("Coffee size(D/M)?: ");
	scanf("%ch",&size);

	if (size=='M' && ch=='W'){
	printf("Time for white coffee is 76 mins.");
}
  else if (size=='M' && ch=='B'){
	printf("Time for black coffee is 105 mins.");
}
	if (size=='D' && ch=='W'){
		printf("Time for double coffe is 114mins");
	}
	else if (size=='D' && ch=='B'){
		printf("Time for double Black coffee is 171.5mins");
	}
}
