#include<stdio.h>
/*
		Fonksiyon tan�mlama
	
	DonusTipi Fonksiyon adi(Parametreler){
	
			fonksiyon blogu
			
			yap�lacak i�lemler
		}
		*/
void hatayibas(int hata, int hata2){
	
	printf("Hata Kodu:%d",hata);//fonksiyon tan�mland�.
}

	int main(){
		
		int sayi;
		
		printf("Lutfen negatif olmayan sayi giriniz:");
		scanf("%d",&sayi);
		
		if (sayi < 0){
		
			hatayibas(404,410);//fonksiyonu �a��r�yor.
			
		}
		else{
			
			printf("%d sayisi pozitiftir",sayi);
		}
		
		return 0;
	}
