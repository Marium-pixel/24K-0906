#include<stdio.h>
int main(){
	int i;
	int arr[50];
	for(i=0;i<=5;i++)
	{
		printf("enter the number to be stored in the %d integer ",i);
		scanf("%d",&arr[i]);
	}
	int last=arr[5];
	
	for(i>=4;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=last;
	for(i=0;i<=5;i++)
	{
	printf("%d",arr[i]);
	}
	


}
