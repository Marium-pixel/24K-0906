#include<stdio.h>
int main(){
	float water1=15,sugar1=15,mixA=20,coffee=2,milk=4,mixb=20;
	float water2=20,sugar2=20,mixA2=25,coffee2=15,mixb2=25;
	int duble,manual;
	printf("is your coffee manual made? 0 for no 1 for yes");
	scanf("%d",&manual);
	printf("is your coffee double in cup size? 0 for no 1 for yes");
	scanf("%d",&duble);
	char type;
	printf("enter type of coffee you want : b for black, w for white");
	scanf(" %c",&type);
	if(manual==1){
		switch(duble){
		case 0:
			switch (type){
			case 'w':
			printf("water; %f, sugar: %f, mixing: %f, coffee: %f, milk:%f, mixing:%f", water1,sugar1,mixA,coffee,milk,mixb);
			break;
			case 'b':
			printf("water; %f, sugar: %f, mixing: %f, coffee: %f, mixing:%f", water2,sugar2,mixA2,coffee2,mixb2 );	
			break;
			}
		break;
		case 1:
			switch(type){
			case 'w':
			printf("water; %f, sugar: %f, mixing: %f, coffee: %f, milk:%f, mixing:%f", 2*water1,2*sugar1,2*mixA,2*coffee,2*milk,2*mixb);
			break;
			case 'b':
			printf("water; %f, sugar: %f, mixing: %f, coffee: %f, mixing:%f", 2*water2,2*sugar2,2*mixA2,2*coffee2,2*mixb2 );	
			break;	
		break;			
			}
				
		}
	}
	
}
