#include<stdio.h>
/*
		Fonksiyon tanýmlama
	
	DonusTipi Fonksiyon adi(Parametreler){
	
			fonksiyon blogu
			
			yapýlacak iþlemler
		}
		*/
void hatayibas(int hata, int hata2){
	
	printf("Hata Kodu:%d",hata);//fonksiyon tanýmlandý.
}

	int main(){
		
		int sayi;
		
		printf("Lutfen negatif olmayan sayi giriniz:");
		scanf("%d",&sayi);
		
		if (sayi < 0){
		
			hatayibas(404,410);//fonksiyonu çaðýrýyor.
			
		}
		else{
			
			printf("%d sayisi pozitiftir",sayi);
		}
		
		return 0;
	}
