#include<stdio.h>
int main(){
	int i,count=0;
	char inp[100];
	printf("enter any words\n");
	scanf("%s",inp);
	printf("enter amount of letters\n");
	int letternum;
	scanf("%d",&letternum);
	int counta=0,counte=0,counti=0,counto=0,countu=0;
	
	for (i=0;i<=letternum;i++)
	{ if (inp[i]=='a'){
		counta=counta +1;
	}
	else if (inp[i]=='e'){
		counte=counte+1;
	}
	else if (inp[i]=='i'){
		counti=counti+1;

	}else if (inp[i]=='o'){
		counto=counto+1;

	}else if (inp[i]=='u'){
		countu=countu+1;
	}
	 
	}
	printf("number of a is %d\n e is%d i is %d\n o is %d\n u is %d\n",counta,counte,counti,counto,countu);
	
}
