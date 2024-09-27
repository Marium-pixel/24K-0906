#include<stdio.h>
int main(){
	int wkday,vacay;
	printf("is it weekday? 0 or 1 \n");
	scanf("%d",&wkday);
	printf(" is it vacay?0 or 1 \n");
	scanf("%d",&vacay);
	if (wkday == 0 && vacay == 0){
		printf(" sleepin");
	}
	else if (wkday == 1 && vacay ==0){
		printf(" not sleepin");
	}
	else if ( wkday==1 && vacay == 1){
		printf("sleepin");
	}
	else if (wkday== 0 && vacay == 1){
		printf("sleepin");
	}

}

