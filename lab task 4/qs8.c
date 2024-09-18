#include<stdio.h>
int main(){
	int integer;
	printf("enter a number between and including1 and 9 \n");
	scanf("%d",&integer);
	if (integer<1){
		printf("less than 1");
	}
	else if(integer>9){
		printf("greater than 9");
	}
	else if(integer>=1 && integer<=9){
		switch (integer){
			case 1:
			printf("one");
			break;
			case 2:
			printf("two");
			break;
			case 3:
			printf("three");
			break;
			case 4:
			printf("four");
			break;
			case 5:
			printf("five");
			break;
			case 6:
			printf("six");
			break;
			case 7:
			printf("seven");
			break;
			case 8:
			printf("eight");
			break;
			case 9:
			printf("nine");
			break;
			
				
			
		}
	}
}

