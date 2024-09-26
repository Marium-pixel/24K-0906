#include<stdio.h>
int main(){
	char type,mancoffee[50];
	int cupsize,water,sugar,mix,coffee,milk,mix2;
	printf("enter type of coffee you want : b for black or w for white \n");
	scanf("%c",&type);
	printf("enter y-yes or n-no if coffee is manual \n");
	scanf("%s",&mancoffee );
	printf("enter 1 for double 0 for other \n");
	scanf("%d",&cupsize);
	if ( type == 'w' && mancoffee=='y'){
		
	water= 15;
    sugar=15;
	mix= 20;
	coffee=2;
	mix2= 20 ;
	milk= 4;

		switch (cupsize){
		case 0:
	    printf("mix time in minutes: water:%d \n sugar: %d \n mix:%d \n  coffee:%d  \n  milk: %d \n  mix2:%d  \n", water,sugar,mix,coffee,milk,mix2 );
		break;
		case 1:
		printf("mix time in minutes: water:%d \n sugar: %d \n mix:%d \n  coffee:%d  \n  milk: %d \n  mix2:%d  \n", 2*water,2*sugar,2*mix,2*coffee,2*milk,2*mix2 );
		break;	
		}
	else if (type == 'w' && mancoffee=='y' ){
	water= 20;
    sugar=20;
	mix= 25;
	coffee=15;
	mix2= 25 ;
	milk= ;
	    switch (cupsize){
		case 0:
	    printf("mix time in minutes: water:%d \n sugar: %d \n mix:%d \n  coffee:%d  \n  milk: %d \n  mix2:%d  \n", water,sugar,mix,coffee,milk,mix2 );
		break;
		case 1:
		printf("mix time in minutes: water:%d \n sugar: %d \n mix:%d \n  coffee:%d  \n  milk: %d \n  mix2:%d  \n", 2*water,2*sugar,2*mix,2*coffee,2*milk,2*mix2 );
		break;	
		}

			
		}
	}	
	}
	
}
