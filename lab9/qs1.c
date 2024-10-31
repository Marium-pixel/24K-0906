#include<stdio.h>
#include<string.h>

int main(){
	int rows = 5;
	int cols = 20;
	char input[5][20];
	char input2[5][20];
	int i,j;
	for(i=0;i<rows;i++){
		printf("enter string %d\n",i+1);
		gets(input[i]);
	}

	for(i=0;i<5;i++){
	printf("string %d: %s\n",i+1, input[i]);
    strcpy(input2[i],input[i]);
	strrev(input2[i]);

    int result=strcmp(input2[i],input[i]);
	
	
	if(result==0){
		printf("this is a palindrome\n");
	}
	else{
		printf("not a palindrome\n");
	}


}
	
}
