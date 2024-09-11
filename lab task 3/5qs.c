#include<stdio.h>
main()
{
	int P,T,R;
        printf("enter principal");
	scanf("%d",&P);
	if (P<100 || P>1000000 ){
		printf("value incorrect");
		}
        printf("enter time");
	scanf("%d",&T);
	if (T<1 || T>10 ){
		printf("value incorrect");
	}
	printf("enter rate of interesr");
	scanf("%d",&R);
	if (R<5 || P>10 ){
		printf("value incorrect");
	}
	float SimpInt;
	SimpInt= (P*R/100*T)/100;
	printf("the simple interest is: %f", SimpInt);
	
	
	
        
	
	
}
