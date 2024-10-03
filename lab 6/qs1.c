#include<stdio.h>
int main(){
	int num,sum=0;
	while ( num != 0){
		printf("enter a number \n");
		scanf("%d",&num);
		sum= sum + num;
		printf("%d \n",sum);
	}
  //while loop would be better for user input
}
