#include <stdio.h>
void swapIntegers(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}

int main(){
	int num1,num2;
	printf("enter first integers");
	scanf("%d",&num1);
	printf("enter second integer");
	scanf("%d",&num2);
	swapIntegers(&num1,&num2);
	printf("%d %d",num1,num2);
	return 0;
	}
