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
		printf("girdi�iniz say�:%lf en b�y�k say�d�r",sayi1);
	}
	else if(sayi1 < sayi2 && sayi2 > sayi3){
	printf("girdi�iniz sayi:%lf en b�y�k say�d�r", sayi2);
	}
	else if(sayi1 < sayi2 && sayi2 < sayi3){
	printf("girdi�iniz sayi:%lf en b�y�k say�d�r", sayi3);
	}
	else{
		printf("Girdi�iniz say�lar birbirlerine e�ittir");
	}
	
	
	
	
	return 0;
}
