#include <stdio.h>
int main(){
  char ch;
	printf("Are you sure to delete[Y/y]/[N/n]?");
	scanf("%c",&ch);
	switch(ch){
		case 'y':
			printf("Deleted sucessfully");
			break;
		case 'Y':
			printf("Deleted successfully");
			break;
		case 'X':
			printf("Delete cancelled");
			break;
		case 'x':
			printf("Delete cancelled");
			break;
		
			
		}
	}
