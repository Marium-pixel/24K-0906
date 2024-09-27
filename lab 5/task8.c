#include<stdio.h>
int main(){
	char roll_number[7];
	printf("enter roll number");
	scanf("%s",&roll_number);
	int rgst_num;
	rgst_num= ((roll_number[0] - '0') * 10) + (roll_number[1] - '0'); 
	printf(" year of admision is \n %d",rgst_num);
	int semester;
	semester= (24-rgst_num);
	char sem;
	printf("enter semester f-fall s-spring\n");
	scanf(" %c",&sem);
	(sem== 'f')? ((semester= semester *2)+1) :(sem== 's') ? ((semester= semester *2)+2): printf("enter f or s only for semester");
	printf("\n semester %d",semester);
	( (roll_number[4] =='1'))? printf("section A"):( (roll_number[4] - '0')=='2')? printf("section B"):( (roll_number[4] - '0')=='3')? printf("C"): ( (roll_number[4] - '0')=='4')? printf("section D"):( (roll_number[4] - '0')==5)? printf("E"): ( (roll_number[4] - '0')=='6')? printf("F"):( (roll_number[4] - '0')=='7')? printf("G"):( (roll_number[4] - '0')=='8')? printf("H") : printf("I");
		
}
