#include<stdio.h>
int main(){
	float gpa;
	printf("enter ur gpa");
	scanf("%f",&gpa);
	(gpa>=0.0 && gpa<1.0)? printf ("failed semester registration suspended") : (gpa >=1.0 && gpa <2.0) ? printf("probation for next sem"): (gpa >= 2.0 && gpa < 3.0)? printf("-"): (gpa >=3.0 && gpa< 3.50)? printf("dean's list for next sem"): printf("highest honours for sememster");
	
}
