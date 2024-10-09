#include<stdio.h>
int main(){
	int num,rem,ognum,sum=0;
	printf("enter a number");
	scanf("%d",&num);
	ognum=num;
    while(ognum>0){
    	rem=ognum%10;
    	sum= sum +(rem*rem*rem);
    	ognum=ognum/10;
    	}

    if(sum==num){
    	printf("number is armstrong");
	}
	else{
		printf("number is not armstrong");
	}
}
