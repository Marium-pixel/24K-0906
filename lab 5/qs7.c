#include<stdio.h>
int main(){
	int num;
	printf("eneter a number");
	scanf("%d", &num);
	(num%10 == 0)? printf("Last Digit is zero" ): printf("Last digit non zero");
}
