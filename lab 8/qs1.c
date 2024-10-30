
#include <stdio.h>

int main() {
    int start,end;
    printf("enter the start of the range");
    scanf("%d",&start);
    printf("enter the end of the range");
    scanf("%d",&end);
   
    int prime[end-start+1];
    int primeIndex=0;
    int isPrime;
    for(int num=start;num<=end;num++)
    {
       if(num<2)continue;
       
          int isPrime=1;
       
       for(int i=2;i*i<=num;i++){
           if(num%i==0){
               isPrime=0;//number is not prime
               break;
           }
       }
       if(isPrime){
        prime[primeIndex]=num;
        primeIndex++;
        
    }
    }
    for(int i=0;i<primeIndex;i++){
        printf("prime numbers are: %d",prime[i]);

    }
     printf("\n");

       
    
    
    
    
}
