#include<stdio.h>
int main(){
	int a;
	printf("enter salary");
	scanf("%d",&a);
	float b;
	printf("enter tax rate");
	scanf("%f",&b);
	int rate,finalsal;
	rate= b/100*a;
	finalsal= a - rate;
	printf("this is the part of salary that is the tax rate: %d", rate);
	printf("this is the total salary left: %d", finalsal);
	
	
	
	
	
}
