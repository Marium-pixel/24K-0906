#include<stdio.h>
int main(){
	int num,i=2;
	printf("enter a number");
	scanf("%d",&num);
	for (i>2; i<=num*num;i++){
		if (num%i!=0){
		printf(" %d is prime", num);
		break;
	 }
	 else if(num%i==0){
	 	printf(" %d is not prime", num);
	 	break;
	 }
}
}
