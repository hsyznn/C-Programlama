#include<stdio.h>
int main(){
	int gun;
	
	printf("1-7 arasinda sayi giriniz:");
	scanf("%d",&gun);
	
	switch(gun){
	case 1:
		printf("Pazartesi");
		break;
	case 2:
		printf("Sali");
		break;
	case 3:
		printf("Carsamba");
		break;
	case 4:
		printf("Persembe");
		break;
	case 5:
		printf("Cuma");
		break;
	case 6:
		printf("Cumartesi");
		break;
	case 7:
		printf("Pazar");
		break;
	default:
		printf("Hatal� islem yapt�n�z");
		break;
		
	}
	//Girilen 1-7 aras�ndaki rakamdan gun hesaplayan program
	
	return 0;
}
