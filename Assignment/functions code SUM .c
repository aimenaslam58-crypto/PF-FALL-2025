#include <stdio.h>
int add(int *a, int *b);
void sum(void);

int add(int *a, int *b){
    return *a+*b;
}

int main(){
    sum();
    return 0;
}
void sum(){
    int x,y;
    printf("Enter 1st Value: ");
    scanf("%d",&x);
    printf("Enter 2nd Value: ");
    scanf("%d",&y);
    
    int result = add(&x,&y);
    printf("The sum of %d and %d is: %d ",x,y,result);
   
    
}
