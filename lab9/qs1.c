#include<stdio.h>
#include<string.h>

int main(){
	char input[5][20];
	char input2[5][20];
	int i,j,legnth;
	for(i=0;i<5;i++){
		printf("enter string %d\n",i+1);
		scanf("%s",&input[i][j]);
	
	}
	int result;
	for(i=0;i<5;i++){
	strcpy(input2[i],input[i]);
	strrev(input2[i]);
}
    if(input2[i]==input[i]){
		result=0;
	}
	if(result=0){
		printf("thisis a palindrome");
	}
	else if (result != 0){
		printf("not a palindrome");
	}


	
}
