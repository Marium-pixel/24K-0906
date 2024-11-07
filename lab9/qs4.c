#include <stdio.h>
void calculate(int a,int b, char fufu){
	int result;
	if(fufu=='+'){
		result=a+b;
		}
	else if(fufu=='-'){
		result=a-b;
	}
	else if(fufu=='/'){
		result=a/b;
	}
	else if(fufu=='*'){
		result=a*b;
	}
	else{
		printf("incorrect operand entered");
	}
	printf("%d",result);
	
}

int main(){
	int num1,num2;
	char bobo;
	printf("enter your first integer");
	scanf("%d",&num1);
	printf("enter your second integer");
	scanf("%d",&num2);
	printf("enter your calculation character;+,-,*,/");
	scanf(" %c",&bobo);
	calculate(num1,num2,bobo);

	return 0;
	}	
	
