#include<stdio.h>
int main(){
	float fat, cal,fcal;
float percent;
printf("enter grams of fat \n");
scanf("%f",&fat);
printf("enter calories in food \n");
scanf("%f",&cal);
if (fat<0 || cal<0){
	printf("incorrect value");
}
fcal=(9*fat);
if (fcal>cal){
	printf("incorrect input");
}
percent=((fcal/cal)*100);
printf("percent of calories are: %f \n ", percent);

}
