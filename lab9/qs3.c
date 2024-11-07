#include <stdio.h>
void primecheck(int a){
	int i;
	int prime;
	for(i=2;i<=a*a;i++){
		if(a>1){
			if(a%i==0){
				prime=1;
			}
			else{
				prime=0;
			}
		}
	}
	if(prime==0){
		printf("num is prime");
	}
	else {
		printf("num is not prime");
	}
	
}

int main(){
	int num1;
	printf("enter your integer");
	scanf("%d",&num1);
	primecheck(num1);

	return 0;
	}	
