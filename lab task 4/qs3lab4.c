#include<stdio.h>
main(){

int n1,n2,func;
printf("enter number 1 \n");
scanf("%d", &n1);
printf("enter number 2 \n");
scanf("%d", &n2);
char character;
printf("enter caluclator function");
scanf(" %c", &character);
switch (character){
case '+':
func=n1 + n2;
printf("sum is %d",func);
break;
case '-':
func=n1 - n2;
printf("difference is %d",func);
break;
case '*':
func=n1 * n2;
printf("product is %d",func);
break;
case '/':
func=n1/n2;
printf("quotient is %d",func);
break;
default:
	printf("invalid character entered");
	break;
}

}

