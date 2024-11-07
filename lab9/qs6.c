#include <stdio.h>
void calculate(int range[100]){
	int max=0,min=9999;
	int i;
	for(i=0;i<7;i++){
		if(range[i]>max){
			max=range[i];
		}
	}
	for(i=0;i<7;i++){
		if(range[i]<min){
			min=range[i];
		}
	}

	printf("max of the range entered is %d",max);
	
	printf("min of the range entered is %d",min);
	
}

int main(){
	int range[100];
	int i;
	printf("enter 6 integers");
	for(i=0;i<7;i++){
		scanf("%d",&range[i]);
	}
	calculate(range);

	return 0;
	}
