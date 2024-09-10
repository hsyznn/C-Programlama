#include<stdio.h>
struct ogrenci{
	
	char isim[20];
	
	char soyisim[20];
	
	int numara;
	
};

void goster(struct ogrenci a){
	
	printf("Ogrencinin Bilgileri: Isim:%s, Soyisim:%s, Numara:%d", a.isim, a.soyisim, a.numara);
	
}
/*
int main(){
	
	struct ogrenci ogrenci1 = {"Huseyin", "Ozen", 274};
	
	goster(ogrenci1);
	
	return 0;
	
	Void fonksiyonu ile kullanýmý
}*/

struct ogrenci degeral(){
	
	struct ogrenci yeni;
	
	printf("Ogrencinin Bilgilerini giriniz:");
	scanf("%s %s %d",&yeni.isim, &yeni.soyisim, &yeni.numara);
	
	return yeni;
}

int main(){
	
	struct ogrenci ogrenci1 = degeral();
	
	goster(ogrenci1);
	
	return 0;
	
}


