#include<stdio.h.>
int main(){
	int bill,discount;
	printf("enter bill amount \n");
	scanf("%d", &bill);
	if (bill>500 && bill<2000){
	
		discount= 5;
		printf("discount offered is %d \n",discount);
		discount=0.05*bill;
		printf("saved amount is %d \n", discount);
		bill= bill - discount;
		printf("your new bill amount is %d \n", bill);
	}
	 else if (bill>=2000 && bill<4000){
	
		discount= 10;
		printf("discount offered is %d  \n",discount);
		discount=0.10*bill;
		printf("saved amount is %d \n", discount);
		bill= bill - discount;
		printf("you new bill amount is %d \n", bill);
	}
	 else if (bill>=4000 && bill<=6000){
	
		discount= 20;
		printf("discount offered is %d  \n",discount);
		discount=0.20*bill;
		printf("saved amount is %d \n", discount);
		bill= bill - discount;
		printf("you new bill amount is %d \n", bill);
	}
	 else if (bill>=4000 && bill<=6000){
	
		discount= 20;
		printf("discount offered is %d  \n",discount);
		discount=0.20*bill;
		printf("saved amount is %d \n", discount);
		bill= bill - discount;
		printf("you new bill amount is %d \n", bill);
	}
	 else if (bill>6000){
	
		discount=35;
		printf("discount offered is %d \n",discount);
		discount=0.35*bill;
		printf("saved amount is %d \n", discount);
		bill= bill - discount;
		printf("you new bill amount is %d \n", bill);
	}
}


