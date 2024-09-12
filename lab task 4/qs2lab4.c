#include<stdio.h>
main(){

int num;
printf("enter number");
scanf("%d", &num);
if (num>0 && num%2==0 && num%10==0){
printf("number accepted %d ", num);
}
else{
	printf("invalid entry");
}
}
