
int main(){
	char weekday,vacation,sleepin;
	printf("is it a weekday?enter Y-yes or N-no");
	scanf("%c", &weekday);
	printf("is it vacation?enter Y-yes or N-no");
	scanf("%c", &vacation);
	switch (weekday){
		case 'Y':
		switch (vacation){
		case 'Y':
			printf("sleepin--->true");
			break;
		case 'N':
			printf("sleepin--->false");
			break;
		}
		break;
		case 'N':
		switch (vacation){
		case 'Y':
			printf("sleeping--->true");
			break;
		case 'N':
			printf("sleeping--->true");
			break;
		}
		break;
	}
}
