#include<stdio.h>
int main(){
	
	double sayi1, sayi2, sayi3;
	
	printf("1.sayiyi giriniz:");
	scanf("%lf", &sayi1);
	printf("2.sayiyi giriniz:");
	scanf("%lf", &sayi2);
	printf("3.sayiyi giriniz:");
	scanf("%lf", &sayi3);
	
	if(sayi1 > sayi2 && sayi1 > sayi3){
		printf("girdiðiniz sayý:%lf en büyük sayýdýr",sayi1);
	}
	else if(sayi1 < sayi2 && sayi2 > sayi3){
	printf("girdiðiniz sayi:%lf en büyük sayýdýr", sayi2);
	}
	else if(sayi1 < sayi2 && sayi2 < sayi3){
	printf("girdiðiniz sayi:%lf en büyük sayýdýr", sayi3);
	}
	else{
		printf("Girdiðiniz sayýlar birbirlerine eþittir");
	}
	
	
	
	
	return 0;
}
