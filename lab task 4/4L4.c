#include<stdio.h.>
int main(){
char x;
printf("enter a single character \n");
scanf("%c", &x);
if (x >= 'a' && x <= 'z'){
	printf("small alphabet");
}
 else if (x >= 'A' && x <= 'Z'){
	printf("capitol alphabet");
}
else if (x >= '0' && x <= '9'){
	printf("digit");
}
else {
	printf("character");
}
}
