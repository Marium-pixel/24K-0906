include<stdio.h>
int main(){
	int n;
	printf("enter the number of rows you want");
	scanf("%d",&n);
	int i,j;
	int  num;
	for(i=0;i<n;i++){
		num=1;
		for(j=0;j<n-i-1;j++){
			printf(" ");
		}
		for (j=0;j<=i;j++)
        {
            printf("%d ",num);
            num=num*(i - j)/ (j + 1);
        }
        printf("\n");
	}
}
