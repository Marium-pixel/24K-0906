#include<stdio.h>
main()
{
	int D=1207,fwd=118,ret=123,Fuelsum,Fuelcost,avg,fwdfuel,retfuel;
	printf("enter fuel average");
	scanf("%d", &avg);
	if (avg <= 0){
		printf("value must be positive");
		
	}
	fwdfuel= D/avg;
	retfuel=D/avg;
	Fuelsum= fwdfuel+ retfuel;
	printf("total amount of fuel consumed is %d", Fuelsum);
	
	avg=avg/2;
	Fuelcost= (fwd*avg + ret*avg);
	printf("total fuel cost is %d",Fuelcost);
	
	
	

	 
	
}
