#include<stdio.h>
int main(){
	
	/*
	int toplam = 0;
	int fiyat = 0;
	float kdv= 0.08f;
	
	do{
			toplam += fiyat;
			
			printf("Urunun fiyatini giriniz:");
			scanf("%d", &fiyat);
		
	
	
	} 	
	while(fiyat != -1);
	
	toplam = toplam * (int)(toplam*kdv);
	
	printf("Toplam fiyat ve KDV:%d",toplam);
	
	ürünlerin toplam fiyatýný KDV dahil hesaplayan program
	*/
	/*

	int dogru =12345;
	int sifre = 0;
	
	do{
		printf("Sifrenizi giriniz:");
		scanf("%d",&sifre);
		if(sifre==dogru){
		
		break;
	}
	else{
		
		printf("Sifre yanlis\n");
	}
			
	}
	while(1);
	
	printf("Sifreniz Dogru.");	
	
	þifre sorgulama 
	*/
	
	int n;
	int toplam =0;
	do{
		
		toplam += n;
		n++;		
		
	}
	while (n<=100);
	
	printf("Sayilarin toplami:%d",toplam);
	
	
	
	return 0;
}
