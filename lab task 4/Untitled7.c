#include<stdio.h>
int main(){
	int ID,Unit;
	float charge,Amount,Subcharge,NetAmount;
    char name[50];
	printf("enter customer ID \n",ID);
	scanf("%d", &ID);
	printf("enter customer name \n");
	scanf("%s", &name);
	printf("enter units used \n",Unit);
	scanf("%d",&Unit);
	if (Unit>=1 && Unit<=199){
		charge= 16.20;
		Amount= charge* Unit;
		printf("amount is: %f", Amount);
}
        if (Unit>=200 && Unit<300){
		charge= 20.10;
		Amount= charge* Unit;
		printf("amount is: %f", Amount);
	}
       if (Unit>=300 && Unit<500){
		charge= 27.10;
		Amount= charge* Unit;
		printf("amount is: %f", Amount);
		}
       if (Unit>=500){
		charge= 35.90;
		Amount= charge* Unit;
		printf("amount is: %f", Amount);
	    }
		if(Amount>18000){
			Subcharge= 0.15 * Amount;
			NetAmount = Subcharge +Amount;
		    printf("total amount: %f \n", NetAmount);
		}
       }
