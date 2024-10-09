#include<stdio.h>
int main(){
	int f=0,s=1,term,num,i=2;
	printf("enter a number");
	scanf("%d",&num);
	for (i>2; i<=num*num;i++){
		if (num%i!=0){
		printf(" %d is prime\n", num);
		if(num>=f){
		printf("%d\n",f);
	}
	else if(num>=s){
		printf("%d\n",s);
	}
	term=f+s;
	while(term<=num){
		printf("%d\n",term);
		f=s;
		s=term;
		term=f+s;
	}
		break;
	 }
	 else if(num%i==0){
	 	printf(" %d is not prime", num);
	 	break;
	 }
}
}
