#include<stdio.h>
int main(){
	int i;
	i=6;
	do{
	
	    if((i==1) || (i==6)){
			printf("*           *\n");}
		else
		printf("*  *  *  *  *\n");
		i--;	
    }
	while (i<7 && i>0);
	return 0;
}
