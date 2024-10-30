#include <stdio.h>

int main() {
    int arr1[3][3];
    int arr2[3][3];
    int result[3][3];
    int sub[3][3];
    int i,j,k;
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("enter values of %d %d of the 3x3 matrix",i,j);
    		scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("enter values of %d %d of the second 3x3 matrix",i,j);
    		scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		result[i][j]=0;
    		for(k=0;k<3;k++){
    			result[i][j]+=arr1[i][k]* arr2[k][j];
			}
			
    	}
    }
    printf("multiplied matrix:");
    
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf(" %d",result[i][j]);
    	}
    	printf("\n");
    }
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    	sub[i][j]=result[i][j]- arr1[i][j];
			}
			
    	}
    	 printf("subtracted matrix:");
   
     for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf(" %d",result[i][j]);
    	}
    	printf("\n");
    }

   
    return 0;
}
