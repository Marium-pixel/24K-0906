#include<stdio.h>
int main(){
	int i;
	for(i=1;i<6;i++){
		if(i==1){
		printf("A  B  C  D  E\n");
		}
		else if(i==2){
		printf("   C     F   \n");
		}
		else if(i==3){
	    printf("      E      \n");
		}
		else if(i==4){
		printf("   E     H   \n");
		}
		else if(i==5){
		printf("E  F  G  H  I\n");			
		}	
	}
	return 0;
}
